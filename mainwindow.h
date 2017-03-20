#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qfilesystemmodel.h>
#include <QItemSelection>
#include <QDebug>
#include <visitstack.h>
#include <filecomponent.h>

#include <tagger.h>
#include <tagdesign.h>
#include <QGridLayout>
#include <QFileIconProvider>

class FileComponent;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void dblSelectFile(QString fileName);
    void selectFile(QString fileName);

    void clearFilesSelection();
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
    QGridLayout* fileView;
    QWidget* widgetFileView;

    FileComponent* selectedFile;

    int filesI, filesJ;

    void setFilesPath(QString path);

    void openPath(QString path);

    void initBackNext();
    void initURL();
    void initFsModel();
    void initTabBar();
    void initFileView();

    void handleBackNextStatus();

    bool isValidPath(QString path);

    QStringList searchFile(QString fileName);
    void generateCheckTags();
    void clearGrid(QGridLayout* grid);
    void addFileToView(QString fileName, QIcon fileIcon);
    void clearFileView();

};

#endif // MAINWINDOW_H

