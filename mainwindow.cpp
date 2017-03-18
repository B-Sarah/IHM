#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dirModel = new QFileSystemModel(this);
    filesModel = new QFileSystemModel(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete dirModel;
}

void MainWindow::initFsModel(){
    dirModel->setRootPath(rootPath);
    dirModel->setReadOnly(false);
    dirModel->setFilter(QDir::NoDotAndDotDot|QDir::Dirs);

    filesModel->setFilter(QDir::NoDotAndDotDot);
    filesModel->setRootPath(rootPath );

    ui->treeView->setModel(dirModel);
    ui->treeView->setColumnHidden(1,true);
    ui->treeView->setColumnHidden(2,true);
    ui->treeView->setColumnHidden(3,true);

    ui->listView->setModel(filesModel);

    ui->listView->setRootIndex(filesModel->setRootPath(rootPath));
}

void MainWindow::initTabBar(){
    ui->tabWidget->setTabEnabled(2,false);
    ui->tabWidget->setTabText(2,"");

}

