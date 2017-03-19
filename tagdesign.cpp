#include "tagdesign.h"
#include "ui_tagdesign.h"
#include "QMessageBox"

TagDesign::TagDesign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TagDesign)
{
    ui->setupUi(this);
    connect(ui->tagName, SIGNAL(editingFinished()), this, SLOT(createTag()));
    //QApplication::activeWindow();
}

TagDesign::TagDesign(Tagger* _tagger, QWidget *parent) : TagDesign(parent)
{
    this->tagger = _tagger;
}

TagDesign::~TagDesign()
{
    delete ui;
}

void TagDesign::setText(QString txt){

    ui->tagName->setText(txt);

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

void TagDesign::createTag()
{
   qDebug()<<ui->tagName->text();
    ui->tagName->releaseKeyboard();
   tagger->addNewTag(ui->tagName->text());


   setEdit(true);
   ui->tagName->setSelection(0,0);

}


