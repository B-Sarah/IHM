#include "visitstack.h"

VisitStack::VisitStack(QString initialDirectory) : currentPath(initialDirectory)
{

}

QString VisitStack::goBack(){
    if(!hasBack()) return "";
    //get the last directory
    QString path = back.pop();

    //next is now the current
    next.push(currentPath);
    //the current becomes the back one
    currentPath = path;

    return path;
}

QString VisitStack::goNext(){
    if(!hasNext()) return "";
    //get the next directory
    QString path = next.pop();

    //back is now the current
    back.push(currentPath);
    //the current becomes the next one
    currentPath = path;
    return path;

}

void VisitStack::goToDirectory(QString directory){
    //new dir is the next one, just redirect
    if(directory == getNext()) goNext();
    //new dir is the last one, just redirect
    else if(directory == getBack()) goBack();
    else{
        if(hasNext()) next.clear();
        back.push(currentPath);
        currentPath = directory;
    }
}

bool VisitStack::hasNext(){
    return !next.isEmpty();
}

bool VisitStack::hasBack(){
    return !back.isEmpty();
}


QString VisitStack::getNext(){
    if(hasNext()) return next.top();
    return "";
}

QString VisitStack::getBack(){
    if(hasBack()) return back.top();
    return "";
}
