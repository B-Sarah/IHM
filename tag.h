#ifndef TAG_H
#define TAG_H

#include <QString>

class Tag
{
public:
    Tag(QString tagName);
    ~Tag();
    QString getName();
    void setName(QString name);
private:
    QString name;
};

#endif // TAG_H
