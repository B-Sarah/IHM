#include "tagdesign.h"
#include "ui_tagdesign.h"
#include "QMessageBox"

TagDesign::TagDesign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TagDesign),
    isSelected(false)
{
    ui->setupUi(this);
    connect(ui->tagName, SIGNAL(editingFinished()), this, SLOT(createTag()));
    //QApplication::activeWindow();
}

TagDesign::TagDesign(MainWindow* main, QWidget *parent) : TagDesign(parent)
{
    this->main = main;
}

TagDesign::~TagDesign()
{
    delete ui;
}

void TagDesign::setText(QString txt){

    ui->tagName->setText(txt);

}

QString TagDesign::getText(){
    return ui->tagName->text();
}

void TagDesign::setEditSelected(){

    ui->tagName->setSelection(0,ui->tagName->text().length());
   //ui->tagName->setFocus();
   ui->tagName->grabKeyboard();


}

void TagDesign::setEdit(bool edit)
{
    if(edit){
        ui->tagName->setReadOnly(false);
    }
    else{
        ui->tagName->setReadOnly(true);
    }

}

bool TagDesign::setCheckbox(bool state)
{
    ui->checkTag->setEnabled(state);
}

bool TagDesign::setCkecked(bool state)
{
    ui->checkTag->setChecked(state);
}

void TagDesign::createTag()
{
   qDebug()<<ui->tagName->text();
    ui->tagName->releaseKeyboard();
    qDebug() << main;
    main->getTagger()->addNewTag(ui->tagName->text());
    //main->getTagger()->;
   setEdit(true);
   ui->tagName->setSelection(0,0);
   isSelected = false;
   setSelectedStyle(true);
}



void TagDesign::on_checkTag_toggled(bool checked)
{
    main->fileTagUpdate(getText(), checked);
}

bool TagDesign::event(QEvent *event)
{
    if(event->type() == QEvent::MouseButtonPress){
        qDebug() << "select";
        isSelected = true;
        setSelectedStyle(true);
    }
}

void TagDesign::setSelectedStyle(bool state){

    ui->editTag->setStyleSheet((state ? "border-color: rgb(114, 159, 207);" : ""));
}
