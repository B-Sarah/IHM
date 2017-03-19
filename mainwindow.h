#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qfilesystemmodel.h>
#include <QItemSelection>
#include <QDebug>

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
public slots:
    void slotSelectionChange(const QItemSelection &, const QItemSelection &);
    void slotDoubleClick(const QModelIndex & index);
private:
    const QString rootPath = "/home/salex";

    Ui::MainWindow *ui;
    QFileSystemModel* dirModel;
    QFileSystemModel* filesModel;

    void setFilesPath(QString path);

    void expandTo(QString path);
};

#endif // MAINWINDOW_H

