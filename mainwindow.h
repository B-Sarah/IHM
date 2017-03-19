#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qfilesystemmodel.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initFsModel();
    void initTabBar();

private:
    Ui::MainWindow *ui;
    QFileSystemModel* model;
};

#endif // MAINWINDOW_H
