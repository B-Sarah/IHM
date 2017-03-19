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

    QCheckBox* checkbox = new QCheckBox();
    checkbox->setObjectName("checkbox1");
    checkbox->setText("tag 2016");
    box->addWidget(checkbox);

    QCheckBox* checkbox1 = new QCheckBox();
    checkbox->setObjectName("checkbox2");
    checkbox1->setText("tag ");
    box->addWidget(checkbox1);

    QCheckBox* checkbox2 = new QCheckBox();
    checkbox2->setObjectName("checkbox1");
    checkbox2->setText("tag 2016");
    box->addWidget(checkbox2);

    QCheckBox* che = new QCheckBox();
    che->setObjectName("checkbox2");
    che->setText("tag ");
    box->addWidget(che);


    QCheckBox* ch = new QCheckBox();
    ch->setObjectName("checkbox1");
    ch->setText("tag 2016");
    box->addWidget(ch);

    QCheckBox* check = new QCheckBox();
    check->setObjectName("checkbox2");
    check->setText("tag ");
    box->addWidget(check);


    QCheckBox* checkbo = new QCheckBox();
    checkbo->setObjectName("checkbox1");
    checkbo->setText("tag 2016");
    box->addWidget(checkbo);

    QCheckBox* checkb = new QCheckBox();
    checkb->setObjectName("checkbox2");
    checkb->setText("tag ");
    box->addWidget(checkb);



ui->scrollTag->setLayout(box);


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

