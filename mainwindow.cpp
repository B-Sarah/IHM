#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);
    model->setReadOnly(false);
    ui->treeView->setModel(model);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete model;
}
