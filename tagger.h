#ifndef TAGGER_H
#define TAGGER_H

#include <QMap>
#include <QString>
#include <QList>
#include <tag.h>
#include <QDebug>

class Tagger
{
public:
    Tagger();
    ~Tagger();

    bool tagFile(QString filePath, QString tagName);
    bool untagFile(QString filePath, QString tagName);

    bool addNewTag(QString tagName);
    bool removeTag(QString tagName);
    bool renameTag(QString previousName, QString newName);

    QList<QString> getTagsList();

    QList<QString> getTagsOfFile(QString fileName);
    QList<QString> searchFilesFromTag(QString tagName);

    bool saveStateToFile(QString tagFileName, QString tagMapFileName);
    bool loadStateFromFile(QString tagFileName, QString tagMapFileName);
private:
    QList<Tag*> tags;
    QMap<QString,  QList<Tag**>> filesTags;

    const QString tagFilePath = ".tagList";
    const QString mapFilePath = ".fileTagsMapping";

    Tag* getTagFromName(QString tagName);
    bool fileAlreadyAdded(QString fileName);
    bool tagPresentInList(Tag* tag);

    bool saveTagToFile(QString tagFileName);
    bool saveMapToFile(QString tagMapFileName);

    bool loadTagFromFile(QString tagFileName);
    bool loadMapFromFile(QString tagMapFileName);
};

#endif // TAGGER_H
