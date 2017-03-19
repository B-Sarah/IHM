#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qfilesystemmodel.h>
#include <QItemSelection>
#include <QDebug>
#include <visitstack.h>
#include <tagger.h>
#include <tagdesign.h>
#include <QGridLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void slotDirSelected(const QItemSelection &, const QItemSelection &);
    void slotFileDoubleClicked(const QModelIndex &);

    void slotBackClicked();
    void slotNextClicked();

    void slotURLChanged();

    void slotAddTag();
    void slotEditTag();
    void slotRemoveTag();
    Tagger* getTagger();
private slots:
    void on_newTag_clicked();


private:
    const QString rootPath = "/home/alexis";

    VisitStack visitedStack;
    Tagger tagger;

    Ui::MainWindow *ui;
    QFileSystemModel* dirModel;
    QFileSystemModel* filesModel;
    QGridLayout* grid;
    int rowTag;
    int columnTag;

    void setFilesPath(QString path);

    void openPath(QString path);

    void initBackNext();
    void initURL();
    void initFsModel();
    void initTabBar();

    void handleBackNextStatus();

    bool isValidPath(QString path);

    QStringList searchFile(QString fileName);
    void generateCheckTags();
    void clearGrid(QGridLayout* grid);
};

#endif // MAINWINDOW_H

