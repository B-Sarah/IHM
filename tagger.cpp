#include "tagger.h"

Tagger::Tagger()
{
    loadStateFromFile(tagFilePath, mapFilePath);
}

Tagger::~Tagger(){
    saveStateToFile(tagFilePath, mapFilePath);

    foreach(Tag* tag, tags){
        delete tag;
        tag = NULL;
    }

    foreach(QList<Tag**> fTags, filesTags.values()){
        foreach(Tag** tag, fTags){
            if(tag != NULL)
                delete tag;
            tag = NULL;
        }
    }
}

/* main functions */

bool Tagger::tagFile(QString filePath, QString tagName){
    QList<Tag**> tagList;

    //retrieve tag
    Tag* tag = getTagFromName(tagName);
    //if it doesn't exist, return
    if(tag == NULL) return false;

    //file is new, add it to dictionary
    if(fileAlreadyAdded(filePath)){
        tagList = filesTags.find(filePath).value();
    }

    Tag** ptTag = (Tag**)malloc(sizeof(Tag*));
    *ptTag = tag;

    tagList.append(ptTag);
    filesTags.insert(filePath, tagList);

    return true;
}

bool Tagger::untagFile(QString filePath, QString tagName){
    //file doesn't exist, return
    if(!fileAlreadyAdded(filePath))
        return false;

    //loop through file tags, if tag is present, remove it
    //from the list, then free the space used for it
    QList<Tag**> tagList = filesTags.find(filePath).value();
    foreach(Tag** ptT, tagList){
        if((*ptT)->getName() == tagName){
            tagList.removeOne(ptT);
            free(ptT);
            ptT = NULL;
        }
    }

    //update the file tags list
    filesTags.insert(filePath, tagList);

    return true;
}

bool Tagger::addNewTag(QString tagName){
    //if tag already exists, return
    if(getTagFromName(tagName) != NULL)
        return false;

    //tag doesn't exist, lets add it
    Tag* tag = new Tag(tagName);
    tags.append(tag);

    return true;
}

bool Tagger::removeTag(QString tagName){
    //get the tag
    Tag* tag = getTagFromName(tagName);

    //the tag doesn't exist
    if(tag == NULL)
        return false;

    //TODO the tag exists, remove it from tagged files


    //then remove the tag from available ones
    tags.removeAt(tags.indexOf(tag));

    delete tag;
    tag = NULL;

    return true;
}

bool Tagger::renameTag(QString previousName, QString newName){
    //get the tag to rename
    Tag* tag = getTagFromName(previousName);

    //the tag doesn't exist
    if(tag == NULL)
        return false;

    tag->setName(newName);

    return true;
}

QList<QString> Tagger::getTagsList(){
    QList<QString> tagNamesList;

    //loop through tags list
    foreach(Tag* tag, tags){
        //add tag name to list
        tagNamesList.append(tag->getName());
    }

    return tagNamesList;
}

QList<QString> Tagger::getTagsOfFile(QString fileName){
    QList<QString> tagNamesList;

    //if fileName doesn't exist, return empty list
    if(!fileAlreadyAdded(fileName)) return tagNamesList;

    //retrieve tags list
    QList<Tag**> tagList = filesTags.find(fileName).value();

    //if while retrieving file tags, we found a tag that has
    //been deleted, then we update the tag list
    for(int i = 0; i < tagList.length(); i++){
        if(!tagPresentInList(*tagList.at(i))){
            tagList.removeAt(i);
        }
    }
    if(tagList.isEmpty()){
        //if no tag left, remove list
        filesTags.remove(fileName);
    }
    else{
        //update the file tags
        filesTags.insert(fileName, tagList);
    }

    //create the list of tag names
    foreach(Tag** tag, tagList){
        tagNamesList.append((*tag)->getName());
    }
    return tagNamesList;
}

QList<QString> Tagger::searchFilesFromTag(QString tagName){
    Tag* tag = getTagFromName(tagName);
    QList<QString> files;

    //tag doesn't exists, return
    if(tag != NULL){
        QMapIterator<QString, QList<Tag**>> it(filesTags);
        while (it.hasNext()) {
            it.next();
            foreach(Tag** t, it.value()){
                if((*t)->getName() == tagName){
                    files.append(it.key());
                    break;
                }
            }
        }
    }

    return files;
}


bool Tagger::saveStateToFile(QString tagFileName, QString tagMapFileName){
    bool success = true;
    success = saveTagToFile(tagFileName);
    if(success)
        success = saveMapToFile(tagMapFileName);

    return success;
}

bool Tagger::loadStateFromFile(QString tagFileName, QString tagMapFileName){
    bool success = true;
    success = loadTagFromFile(tagFileName);
    if(success)
        success = loadMapFromFile(tagMapFileName);

    return success;
}


/* utility */

Tag* Tagger::getTagFromName(QString tagName){
    Tag* foundTag = NULL;

    //loop through tags list
    foreach(Tag* tag, tags){
        //compare names of tags
        if(tag->getName() == tagName){
            foundTag = tag;
            break;
        }
    }

    return foundTag;
}

bool Tagger::fileAlreadyAdded(QString fileName){
    foreach(QString file, filesTags.keys()){
        if(file == fileName)
            return true;
    }
    return false;
}

bool Tagger::tagPresentInList(Tag* tag){
    foreach(Tag* t, tags){
        if(t == tag)
            return true;
    }
    return false;
}

bool Tagger::saveTagToFile(QString tagFileName){
    QFile file (tagFileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream writer(&file);
    writer.setCodec("UTF-8");

    foreach(Tag* t, tags){
        writer << t->getName() << endl;
    }

    file.close();
    return true;
}

bool Tagger::saveMapToFile(QString tagMapFileName){
    QFile file (tagMapFileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream writer(&file);
    writer.setCodec("UTF-8");

    foreach(QString filePath, filesTags.keys()){
        //filename first followed by : then tags of file
        writer << filePath << ":";
        QList<QString> tagOfFile = getTagsOfFile(filePath);
        foreach(QString tagName, tagOfFile){
            writer << tagName << ",";
        }
        writer << endl;
    }

    file.close();
    return true;
}

bool Tagger::loadTagFromFile(QString tagFileName){
    QFile file (tagFileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream flux(&file);

    QString tagLine;

    while(!flux.atEnd()){
        tagLine = flux.readLine();
        addNewTag(tagLine);
    }
    file.close();
    return true;
}

bool Tagger::loadMapFromFile(QString tagMapFileName){
    QFile file (tagMapFileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream flux(&file);

    QString mapLine;

    while(!flux.atEnd()){
        mapLine = flux.readLine();
        //we split the line with : and ,
        QStringList lineSplit = mapLine.split(":");
        //1st word is key (file name)
        QString fileName = lineSplit.at(0);
        lineSplit = lineSplit.at(1).split(",");

        //fill all remaining word as tag of file
        for(int i = 0; i < lineSplit.length(); i++){
            tagFile(fileName, lineSplit.at(i));
        }

    }
    file.close();
    return true;
}
