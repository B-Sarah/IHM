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

private:
    QList<Tag*> tags;
    QMap<QString,  QList<Tag**>> filesTags;

    Tag* getTagFromName(QString tagName);
    bool fileAlreadyAdded(QString fileName);
    bool tagPresentInList(Tag* tag);
};

#endif // TAGGER_H
