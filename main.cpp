#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "tagger.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Tagger tagger;

    tagger.addNewTag("Comptabilite");
    tagger.addNewTag("2016");
    //tagger.renameTag("Comptabilite", "Administration");

    tagger.tagFile("abc.txt", "Comptabilite");
    tagger.tagFile("abc.txt", "2016");

    tagger.removeTag("2016");

    tagger.renameTag("Comptabilite", "Administration");

    foreach(QString tag, tagger.getTagsOfFile("abc.txt")){
        qDebug() << tag;
    }

    return a.exec();
}
