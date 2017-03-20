#include "filecomponent.h"
#include "ui_filecomponent.h"

FileComponent::FileComponent(bool selectable, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileComponent)
{
    ui->setupUi(this);
    this->selectable = selectable;
}

FileComponent::FileComponent(QString fileName, QIcon fileIcon, MainWindow *window, bool selectable, QWidget *parent) :
    FileComponent(selectable, parent)
{
    this->fileName = fileName;
    QString tmp = "<p style=\"line-height:%1%\">%2<p>";
    QString targetText = tmp.arg(60).arg(fileName);
    ui->name->setText(targetText);
    QPixmap pixmap = fileIcon.pixmap(41, 41);
    ui->icon->setPixmap(pixmap);
    this->main = window;
}



FileComponent::~FileComponent()
{
    delete ui;
}

void FileComponent::select(bool state)
{
    ui->lineEdit->setStyleSheet((state ? "\n" : "border:none;"));
}



bool FileComponent::event(QEvent *event)
{

    if(selectable){
        if(event->type() == QEvent::MouseButtonPress){
            main->clearFilesSelection();
            select(true);
            main->selectFile(this->fileName);
        }
        if(event->type() == QEvent::MouseButtonDblClick){
            main->dblSelectFile(fileName);
        }
    }
}
