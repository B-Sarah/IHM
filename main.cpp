#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "tagger.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Tagger tagger;

    qDebug() << "Recherche du tag Photo2016";
    foreach(QString file, tagger.searchFilesFromTag("Photo2016")){
        qDebug() << file;
    }

    return a.exec();
}
