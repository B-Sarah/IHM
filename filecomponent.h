#ifndef FILECOMPONENT_H
#define FILECOMPONENT_H

#include <QWidget>
#include <QString>
#include <QDebug>
#include <mainwindow.h>

class MainWindow;

namespace Ui {
class FileComponent;

}

class FileComponent : public QWidget
{
    Q_OBJECT

public:
    explicit FileComponent(bool selectable = true, QWidget *parent = 0);
    explicit FileComponent(QString fileName, QIcon fileIcon, MainWindow* window, bool selectable = true, QWidget *parent = 0);
    ~FileComponent();

    void select(bool state);
private:
    MainWindow* main;
    Ui::FileComponent *ui;
    bool selectable;
    bool event(QEvent *event);
    QString fileName;
};

#endif // FILECOMPONENT_H
