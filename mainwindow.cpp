#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
}

void MainWindow::initFsModel(){
    model->setRootPath("/");
    model->setReadOnly(false);
     model->setFilter(QDir::NoDotAndDotDot|QDir::Dirs);

    ui->treeView->setModel(model);
    ui->treeView->setColumnHidden(1,true);
    ui->treeView->setColumnHidden(2,true);
    ui->treeView->setColumnHidden(3,true);




}

void MainWindow::initTabBar(){
    ui->tabWidget->setTabEnabled(2,false);
    ui->tabWidget->setTabText(2,"");

}
