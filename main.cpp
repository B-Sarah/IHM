#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "tagger.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.initTabBar();
    w.initFsModel();

    w.show();

    Tagger tagger;

    tagger.addNewTag("Photo2016");

    tagger.tagFile("photo1.jpg", "Photo2016");
    tagger.tagFile("photo2.jpg", "Photo2016");

    qDebug() << "Fichier photo1.jpg";
    foreach(QString tag, tagger.getTagsOfFile("photo1.jpg")){
        qDebug() << tag;
    }
    qDebug() << "Fichier photo2.jpg";
    foreach(QString tag, tagger.getTagsOfFile("photo2.jpg")){
        qDebug() << tag;
    }

    tagger.renameTag("Photo2016", "Photo2015");

    qDebug() << "Fichier photo1.jpg";
    foreach(QString tag, tagger.getTagsOfFile("photo1.jpg")){
        qDebug() << tag;
    }
    qDebug() << "Fichier photo2.jpg";
    foreach(QString tag, tagger.getTagsOfFile("photo2.jpg")){
        qDebug() << tag;
    }

    tagger.addNewTag("Photo2016");
    tagger.tagFile("photo1.jpg", "Photo2016");

    qDebug() << "Fichier photo1.jpg";
    foreach(QString tag, tagger.getTagsOfFile("photo1.jpg")){
        qDebug() << tag;
    }

    tagger.removeTag("Photo2015");

    qDebug() << "Fichier photo1.jpg";
    foreach(QString tag, tagger.getTagsOfFile("photo1.jpg")){
        qDebug() << tag;
    }
    qDebug() << "Fichier photo2.jpg";
    foreach(QString tag, tagger.getTagsOfFile("photo2.jpg")){
        qDebug() << tag;
    }

    tagger.tagFile("photo3.jpg", "Photo2015");
    tagger.tagFile("photo4.jpg", "Photo2015");
    tagger.tagFile("photo3.jpg", "Photo2015");

    tagger.tagFile("photo3.jpg", "Photo2016");
    tagger.tagFile("photo4.jpg", "Photo2016");
    tagger.tagFile("photo5.jpg", "Photo2016");

    qDebug() << "Recherche du tag Photo2016";
    foreach(QString file, tagger.searchFilesFromTag("Photo2016")){
        qDebug() << file;
    }


    return a.exec();
}
