#include "tag.h"

Tag::Tag(QString tagName) : name(tagName)
{

}

Tag::~Tag(){

}

QString Tag::getName(){
    return name;
}

void Tag::setName(QString name){
    this->name = name;
}
