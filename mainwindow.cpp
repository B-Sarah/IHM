#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QCheckBox"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dirModel = new QFileSystemModel(this);
    filesModel = new QFileSystemModel(this);



    QBoxLayout* box= new QBoxLayout(QBoxLayout::LeftToRight);
    QGridLayout* grid= new QGridLayout();
    for(int i=0; i<140;i++){
        for(int j=0; j<6;j++){
            QCheckBox* checkbox = new QCheckBox();
            checkbox->setMaximumWidth(200);
            //checkbox->setMinimumHeight(20);
            checkbox->setMaximumHeight(20);
            checkbox->setObjectName("checkbox2");
            checkbox->setText("tag ");
            grid->addWidget(checkbox,i,j);
        }
    }
   grid->setAlignment(Qt::AlignTop);
   QWidget* widget = new QWidget();
   widget->setLayout(grid);
   ui->scrollTag->setWidget(widget);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete dirModel;
    delete filesModel;

}

void MainWindow::initFsModel(){

    //init dir model
    dirModel->setReadOnly(false);
    dirModel->setFilter(QDir::NoDotAndDotDot|QDir::Dirs);

    //add model to tree view
    ui->treeView->setModel(dirModel);

    QItemSelectionModel* selectionModel = ui->treeView->selectionModel();
    connect(selectionModel, SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
                 SLOT(slotSelectionChange(const QItemSelection &, const QItemSelection &))
                );

    //
    /*
    ui->treeView->setColumnHidden(1,true);
    ui->treeView->setColumnHidden(2,true);
    ui->treeView->setColumnHidden(3,true);

    */

    //open files at root in view

    /*ui->listView->setModel(filesModel);
    connect(ui->listView, SIGNAL (doubleClicked (const QModelIndex & )), this,
      SLOT ( slotDoubleClick(const QModelIndex & ))); */

    //open tree view to root
    expandTo(rootPath);
}

void MainWindow::initTabBar(){
    ui->tabWidget->setTabEnabled(2,false);
    ui->tabWidget->setTabText(2,"");

}


void MainWindow::expandTo(QString path){
    ui->treeView->collapseAll();
    QModelIndex dirIndex = dirModel->setRootPath(path);
    QModelIndex parentDir = dirModel->parent(dirIndex);

    ui->treeView->selectionModel()->clearSelection();
    //FIXME
    //ui->treeView->selectionModel()->select(dirIndex, QItemSelectionModel::Select);

    ui->treeView->expand(dirModel->parent(dirIndex));
    //expand root
    ui->treeView->expand(dirIndex);
    //then expand all parents
    while(parentDir.isValid()){
        ui->treeView->expand(parentDir);
        parentDir = parentDir.parent();
    }

    setFilesPath(path);
}

void MainWindow::setFilesPath(QString path){
    filesModel->setRootPath(path);
    /*ui->listView->setRootIndex(filesModel->setRootPath(path));*/
}

void MainWindow::slotSelectionChange(const QItemSelection & index, const QItemSelection &)
{
    QModelIndex selectionIndex = ui->treeView->selectionModel()->selectedIndexes().at(0);
    QString path = dirModel->fileInfo(selectionIndex).absoluteFilePath();
    setFilesPath(path);
}

void MainWindow::slotDoubleClick(const QModelIndex & index){
    QString path = filesModel->fileInfo(index).absoluteFilePath();
    expandTo(path);
}

