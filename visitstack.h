#ifndef VISITSTACK_H
#define VISITSTACK_H

#include <QStack>
#include <QString>
#include <QDebug>

class VisitStack
{
public:
    VisitStack(QString initialDirectory);

    QString goBack();
    QString goNext();

    void goToDirectory(QString directory);

    bool hasNext();
    bool hasBack();

    QString getNext();
    QString getBack();
private:
    QStack<QString> next;
    QStack<QString> back;
    QString currentPath;



};

#endif // VISITSTACK_H
