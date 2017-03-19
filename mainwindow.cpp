#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QCheckBox"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    visitedStack(rootPath)
{
    ui->setupUi(this);

    dirModel = new QFileSystemModel(this);
    filesModel = new QFileSystemModel(this);

    initTabBar();
    initFsModel();
    initBackNext();
    initURL();
    generateCheckTags();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete dirModel;
    delete filesModel;
}

void MainWindow::initBackNext(){
    connect(ui->back, SIGNAL(clicked(bool)), this, SLOT(slotBackClicked()));
    connect(ui->next, SIGNAL(clicked(bool)), this, SLOT(slotNextClicked()));
}

void MainWindow::handleBackNextStatus(){
    ui->next->setEnabled(visitedStack.hasNext());
    ui->back->setEnabled(visitedStack.hasBack());
}

void MainWindow::initURL(){
    connect(ui->lineEdit, SIGNAL(editingFinished()), this, SLOT(slotURLChanged()));
}

void MainWindow::initFsModel(){

    //init dir model
    dirModel->setReadOnly(false);
    dirModel->setFilter(QDir::NoDotAndDotDot|QDir::Dirs);

    //add model to tree view
    ui->treeView->setModel(dirModel);

    QItemSelectionModel* selectionModel = ui->treeView->selectionModel();
    connect(selectionModel, SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
                 SLOT(slotDirSelected(const QItemSelection &, const QItemSelection &))
                );

    //
    ui->treeView->setColumnHidden(1,true);
    ui->treeView->setColumnHidden(2,true);
    ui->treeView->setColumnHidden(3,true);

    //open files at root in view

    //ui->listView->setModel(filesModel);

    //connect(ui->listView, SIGNAL (doubleClicked (const QModelIndex & )), this,
    //  SLOT ( slotFileDoubleClicked(const QModelIndex & )));

    //open tree view to root
    openPath(rootPath);
}

void MainWindow::initTabBar(){
    ui->tabWidget->setTabEnabled(2,false);
    ui->tabWidget->setTabText(2,"");

}

bool MainWindow::isValidPath(QString path){
    return QDir(path).exists();
}

void MainWindow::openPath(QString path){
    ui->treeView->collapseAll();
    QModelIndex dirIndex = dirModel->setRootPath(path);
    QModelIndex parentDir = dirModel->parent(dirIndex);

    //ui->treeView->selectionModel()->clearSelection();
    //FIXME
    //ui->treeView->setCurrentIndex(dirIndex);
    ui->treeView->selectionModel()->select(dirIndex, QItemSelectionModel::ClearAndSelect | QItemSelectionModel::Rows);

    ui->treeView->expand(dirModel->parent(dirIndex));
    //expand root
    ui->treeView->expand(dirIndex);
    //then expand all parents
    while(parentDir.isValid()){
        ui->treeView->expand(parentDir);
        parentDir = parentDir.parent();
    }

    filesModel->setRootPath(path);
    //ui->listView->setRootIndex(filesModel->setRootPath(path));

    visitedStack.goToDirectory(path);
    handleBackNextStatus();

    ui->lineEdit->setText(path);
}

void MainWindow::setFilesPath(QString path){
    openPath(path);
}


/* SLOTS */

void MainWindow::slotDirSelected(const QItemSelection &, const QItemSelection &)
{
    QModelIndex selectionIndex = ui->treeView->selectionModel()->selectedIndexes().at(0);
    QString path = dirModel->fileInfo(selectionIndex).absoluteFilePath();
    setFilesPath(path);
}

void MainWindow::slotFileDoubleClicked(const QModelIndex & index){
    QString path = filesModel->fileInfo(index).absoluteFilePath();
    if(filesModel->fileInfo(index).isDir())
        openPath(path);
}

void MainWindow::slotBackClicked(){
    openPath(visitedStack.goBack());
}

void MainWindow::slotNextClicked(){
    openPath(visitedStack.goNext());
}

void MainWindow::slotURLChanged(){
    if(isValidPath(ui->lineEdit->text())){
        openPath(ui->lineEdit->text());
    }
    else
        ui->lineEdit->setText(dirModel->rootPath());
}


void MainWindow::slotAddTag(){

}

void MainWindow::slotEditTag(){

}

void MainWindow::slotRemoveTag(){

}

void MainWindow::generateCheckTags(){
   QGridLayout* grid= new QGridLayout();
   int i, j;
   i=0;
   j=0;
   QList<QString> tagList =  tagger.getTagsList();

    for(int index=0; index < tagList.length();index++){
         QCheckBox* checkbox = new QCheckBox();
         checkbox->setMaximumWidth(500);
         checkbox->setMaximumHeight(20);
         checkbox->setObjectName(tagList.at(index));
         checkbox->setText(tagList.at(index));
         if(j == 6){
             qDebug()<<"blaaaaaaaaaaaaaaaa"<<i<<"----"<<j;
            j = 0;
            i++;
          }
         grid->addWidget(checkbox,i,j);
         j++;
        }

    grid->setAlignment(Qt::AlignTop);
    QWidget* widget = new QWidget();
    widget->setLayout(grid);
    ui->scrollTag->setWidget(widget);

    }



