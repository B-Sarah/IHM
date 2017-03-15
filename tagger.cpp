#include "tagger.h"

Tagger::Tagger()
{

}

Tagger::~Tagger(){
    foreach(Tag* tag, tags){
        delete tag;
    }
}

/* main functions */

bool Tagger::tagFile(QString filePath, QString tagName){
    QList<Tag*> tagList;

    //retrieve tag
    Tag* tag = getTagFromName(tagName);
    //if it doesn't exist, return
    if(tag == NULL) return false;

    //file is new, add it to dictionary
    if(fileAlreadyAdded(filePath)){
        tagList = filesTags.find(filePath).value();
    }

    tagList.append(tag);
    filesTags.insert(filePath, tagList);

    return true;
}

bool Tagger::untagFile(QString filePath, QString tagName){

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
    QList<Tag*> tagList = filesTags.find(fileName).value();

    //if while retrieving file tags, we found a tag that has
    //been deleted, then we update the tag list
    for(int i = 0; i < tagList.length(); i++){
        if(tagList.at(i) == NULL)
            tagList.removeAt(i);
    }
    //update the file tags
    filesTags.insert(fileName, tagList);

    //create the list of tag names
    foreach(Tag* tag, tagList){
        tagNamesList.append(tag->getName());
    }
    return tagNamesList;
}

QList<QString> Tagger::searchFilesFromTag(QString tagName){

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
