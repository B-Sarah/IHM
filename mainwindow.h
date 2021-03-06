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
#include <QStringList>

class FileComponent;
class TagDesign;


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
    Tagger* getTagger();

    void fileTagUpdate(QString tagName, bool checked);
    bool saveRootPathToFile();
    bool loadRoothPath();
    QString removeItemFromGrid();
public slots:
    void slotDirSelected(const QItemSelection &, const QItemSelection &);
    void slotFileDoubleClicked(const QModelIndex &);

    void slotBackClicked();
    void slotNextClicked();

    void slotURLChanged();

    void slotAddTag();
    void slotEditTag();
    void slotRemoveTag();

private slots:
    void on_newTag_clicked();



    void on_sortTag_currentIndexChanged(const QString &arg1);

    void on_searchTag_editingFinished();

    void on_confirm_clicked();

    void on_rootPath_editingFinished();

    void on_removeTag_clicked();

    void on_searchTag_3_editingFinished();

private:
    QString rootPath = "/home/alexis";

    VisitStack visitedStack;
    Tagger* tagger;

    Ui::MainWindow *ui;
    QFileSystemModel* dirModel;
    QFileSystemModel* filesModel;
    QGridLayout* grid;
    int rowTag;
    int columnTag;
    QGridLayout* fileView;
    QWidget* widgetFileView;

    QString selectedFile;

    bool sortAZ;

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
    void generateCheckTags(QString filter = "");
    void clearGrid(QGridLayout* grid);
    void addFileToView(QString fileName, QIcon fileIcon);
    void clearFileView();

    void setCheckBoxDisplay(bool state);


    //filter
    QFileSystemModel* dirModelFilter;

    void InitFilter();
    void ExpandFilterNodes(QString path, bool select = false, bool clear = false);

    int filterI, filterJ;
    QGridLayout* fileFilterView;
    QWidget* widgetFileFilterView;

    void SetFilterFiles(QStringList filesFiltered);
    void initFileFilterView();
    void addFileToFilterView(QString fileName, QIcon fileIcon);
    void clearFileFilterView();
};

#endif // MAINWINDOW_H

