#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QCheckBox"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    visitedStack(rootPath),
    sortAZ(true)
{

    ui->setupUi(this);

    tagger = new Tagger();

    dirModel = new QFileSystemModel(this);
    filesModel = new QFileSystemModel(this);

    rowTag=0;
    columnTag=0;

    grid = new QGridLayout();
    loadRoothPath();
    initTabBar();
    initFileView();
    initFsModel();
    initBackNext();
    initURL();
    generateCheckTags();
    InitFilter();
    initFileFilterView();

    setCheckBoxDisplay(false);


}

MainWindow::~MainWindow()
{
    saveRootPathToFile();

    delete ui;
    delete dirModel;
    delete filesModel;
    delete widgetFileView;

    delete dirModelFilter;
    delete fileFilterView;
    delete widgetFileFilterView;

    delete tagger;
}

void MainWindow::dblSelectFile(QString fileName)
{
    openPath(dirModel->rootPath() + "/" + fileName);
}

void MainWindow::selectFile(QString fileName)
{
    selectedFile = "";
    qDebug() << "setting name";
    setCheckBoxDisplay(true);
    fileName = dirModel->rootPath() + "/" + fileName;
    selectedFile = fileName;
    clearGrid(grid);
    generateCheckTags();
    qDebug() << "tag for " << selectedFile;
    QList<QString> tagsList = tagger->getTagsOfFile(fileName);
    for(int i = 0; i < grid->count(); i++){
        if(tagsList.contains(((TagDesign*)(grid->itemAt(i)->widget()))->getText())){
            qDebug() << "tag found";
            ((TagDesign*)(grid->itemAt(i)->widget()))->setCkecked(true);
        }
    }


}

void MainWindow::initBackNext(){
    connect(ui->back, SIGNAL(clicked(bool)), this, SLOT(slotBackClicked()));
    connect(ui->next, SIGNAL(clicked(bool)), this, SLOT(slotNextClicked()));
    handleBackNextStatus();
}

void MainWindow::handleBackNextStatus(){
    ui->next->setEnabled(visitedStack.hasNext());
    ui->back->setEnabled(visitedStack.hasBack());
}

void MainWindow::initURL(){
    connect(ui->lineEdit, SIGNAL(editingFinished()), this, SLOT(slotURLChanged()));
}


void MainWindow::initFileView(){
    fileView = new QGridLayout();
    fileView->setAlignment(Qt::AlignTop);
    fileView->setSpacing(20);

    widgetFileView = new QWidget();
    widgetFileView->setLayout(fileView);
    widgetFileView->setMaximumWidth(740);

    ui->scrollFolder->setWidget(widgetFileView);
}

void MainWindow::initFsModel(){

    //init dir model
    dirModel->setReadOnly(false);
    dirModel->setFilter(QDir::NoDotAndDotDot|QDir::Dirs);

    //add model to tree view
    ui->treeView->setModel(dirModel);

    QItemSelectionModel* selectionModel = ui->treeView->selectionModel();
    connect(selectionModel, SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
                 SLOT(slotDirSelected(const QItemSelection &, const QItemSelection &))
                );

    //
    ui->treeView->setColumnHidden(1,true);
    ui->treeView->setColumnHidden(2,true);
    ui->treeView->setColumnHidden(3,true);

    //open files at root in view

    //ui->listView->setModel(filesModel);

    //connect(ui->listView, SIGNAL (doubleClicked (const QModelIndex & )), this,
    //  SLOT ( slotFileDoubleClicked(const QModelIndex & )));

    //open tree view to root
    openPath(rootPath);
}

void MainWindow::initTabBar(){
    ui->tabWidget->setTabEnabled(2,false);
    ui->tabWidget->setTabText(2,"");

}

bool MainWindow::isValidPath(QString path){
    return QDir(path).exists();
}

void MainWindow::addFileToView(QString fileName, QIcon fileIcon){
    filesJ++;
    if(filesJ == 6){
        filesJ = 0;
        filesI++;
    }
    FileComponent* comp = new FileComponent(fileName, fileIcon, this);

    fileView->addWidget(comp, filesI, filesJ);
    comp->show(); //SALOPERIE !!!
}

void MainWindow::clearFileView()
{
    filesI = 0;
    filesJ = 0;

    QLayoutItem *child;
    while ((child = fileView->takeAt(0)) != 0) {
    delete child->widget();
    delete child;
    }

}

void MainWindow::openPath(QString path){
    QFileInfo info(path);
    if(!info.isDir()) return;

    //ui->treeView->collapseAll();
    QModelIndex dirIndex = dirModel->setRootPath(path);
    QModelIndex parentDir = dirModel->parent(dirIndex);

    //ui->treeView->selectionModel()->clearSelection();
    //FIXME
    //ui->treeView->setCurrentIndex(dirIndex);
    ui->treeView->selectionModel()->select(dirIndex, QItemSelectionModel::ClearAndSelect | QItemSelectionModel::Rows);

    ui->treeView->expand(dirModel->parent(dirIndex));
    //expand root
    ui->treeView->expand(dirIndex);
    //then expand all parents
    while(parentDir.isValid()){
        ui->treeView->expand(parentDir);
        parentDir = parentDir.parent();
    }

    filesModel->setRootPath(path);
    //ui->listView->setRootIndex(filesModel->setRootPath(path));

    visitedStack.goToDirectory(path);
    handleBackNextStatus();

    ui->lineEdit->setText(path);

    clearFilesSelection();

    setFilesPath(path);
}

void MainWindow::setFilesPath(QString path){
    clearFileView();

    QStringList paths = QDir(path).entryList(QDir::NoDotAndDotDot|QDir::Dirs|QDir::Files);

    foreach(QString p, paths){
        QFileInfo info(path + "/" + p);
        QFileIconProvider ip;
        QIcon icon;
        if(info.isFile())
            icon = ip.icon(QFileIconProvider::File);
        else
            icon = ip.icon(QFileIconProvider::Folder);

        addFileToView(p, icon);
    }

}


/* SLOTS */

void MainWindow::slotDirSelected(const QItemSelection &, const QItemSelection &)
{
    QModelIndex selectionIndex = ui->treeView->selectionModel()->selectedIndexes().at(0);
    QString path = dirModel->fileInfo(selectionIndex).absoluteFilePath();
    if(path != dirModel->rootPath())
        openPath(path);
}

void MainWindow::slotFileDoubleClicked(const QModelIndex & index){
    QString path = filesModel->fileInfo(index).absoluteFilePath();
    if(filesModel->fileInfo(index).isDir())
        openPath(path);
}

void MainWindow::slotBackClicked(){
    openPath(visitedStack.goBack());
}

void MainWindow::slotNextClicked(){
    openPath(visitedStack.goNext());
}

void MainWindow::slotURLChanged(){
    if(ui->lineEdit->text() != "" && ui->lineEdit->text() != dirModel->rootPath() && isValidPath(ui->lineEdit->text())){
        openPath(ui->lineEdit->text());
    }
    else
        ui->lineEdit->setText(dirModel->rootPath());
}


void MainWindow::slotAddTag(){

}

void MainWindow::slotEditTag(){

}

void MainWindow::slotRemoveTag(){

}

void MainWindow::clearFilesSelection()
{
    selectedFile = "";
    setCheckBoxDisplay(false);
    for(int i = 0; i < fileView->count(); i++){
        ((FileComponent*)fileView->itemAt(i)->widget())->select(false);
    }
}

void MainWindow::generateCheckTags(QString filter){


   QStringList tagList(tagger->getTagsList());
   for(int i = 0; i < tagList.length(); i++){
       if(filter != ""){
           qDebug() << "filtering : " << tagList.at(i);
           if(!tagList.at(i).startsWith(filter, Qt::CaseSensitive)){
               qDebug() << tagList.at(i) << " : " << filter;
               tagList.removeAt(i);
               i--;
           }
           qDebug() << "end";
       }
   }

   QStringList taggedList;

   for(int i = 0; i < tagList.length(); i++){
       if(tagger->getTagsOfFile(selectedFile).contains(tagList.at(i))){
           taggedList.append(tagList.at(i));
           tagList.removeAt(i);
       }
   }

   tagList.sort(Qt::CaseInsensitive);
   taggedList.sort(Qt::CaseInsensitive);
   int index = 0;
   int limit = tagList.length();
   if(!sortAZ){
       index = tagList.length() - 1;
       limit = 0;
   }

   for(int id = 0; id < taggedList.length(); id++){
        TagDesign* checkbox = new TagDesign(this);
        checkbox->setText(taggedList.at(id));
        checkbox->setEdit(false);
        if(columnTag == 5){
           columnTag = 0;
           rowTag++;
         }
        grid->addWidget(checkbox,rowTag,columnTag);

        columnTag++;
    }


    for(; (sortAZ ? index < limit : index >= 0); (sortAZ ? index++ : index--)){
         TagDesign* checkbox = new TagDesign(this);
         checkbox->setText(tagList.at(index));
         checkbox->setEdit(false);
         if(columnTag == 5){
            columnTag = 0;
            rowTag++;
          }
         grid->addWidget(checkbox,rowTag,columnTag);

         columnTag++;
        }

    grid->setAlignment(Qt::AlignTop);
    QWidget* widget = new QWidget();
    widget->setLayout(grid);
    ui->scrollTag->setWidget(widget);

    }




void MainWindow::on_newTag_clicked()
{
    clearFilesSelection();
    clearGrid(grid);
    TagDesign* tagD = new TagDesign(this);

    tagD->setText("New tag");
    grid->addWidget(tagD,0,0);
    tagD->setEdit(true);
    tagD->setEditSelected();
    //tagD->setFocusEdit();


    columnTag++;

    generateCheckTags();


}

void MainWindow::setCheckBoxDisplay(bool state){
    for(int i = 0; i <grid->count(); i++){
        ((TagDesign*)grid->itemAt(i)->widget())->setCheckbox(state);
        ((TagDesign*)(grid->itemAt(i)->widget()))->setCkecked(false);
    }
}

Tagger *MainWindow::getTagger()
{
    return tagger;
}

void MainWindow::fileTagUpdate(QString tagName, bool checked)
{
    if(selectedFile == "") return;
    if(checked){
        qDebug() << "tagging " << selectedFile << " : " << tagName;
        tagger->tagFile(selectedFile, tagName);
    }
    else{
        qDebug() << "untagging " << selectedFile << " : " << tagName;
        tagger->untagFile(selectedFile, tagName);
    }
}

void MainWindow::clearGrid(QGridLayout* gridLayout){
    QLayoutItem* item;
    while((item = gridLayout->takeAt(0))!= 0){
       if(item->widget() !=  NULL){
        delete item->widget();
           columnTag = 0;
           rowTag = 0;
        }
    }
}

void MainWindow::on_sortTag_currentIndexChanged(const QString &arg1)
{
    qDebug() << "sort";
    if(arg1 == "A-Z"){
        sortAZ = true;
    } else {
        sortAZ = false;
    }
    clearGrid(grid);
    generateCheckTags();
    if(selectedFile != ""){
        selectFile(selectedFile.split("/").last());
    }

}

void MainWindow::on_searchTag_editingFinished()
{
    clearGrid(grid);
    generateCheckTags(ui->searchTag->text());
}

void MainWindow::on_confirm_clicked()
{
    if(ui->rootPath->text() != "")
    rootPath = ui->rootPath->text();
}

void MainWindow::on_rootPath_editingFinished()
{
    if(ui->rootPath->text() != "")
    rootPath = ui->rootPath->text();

}



bool MainWindow::saveRootPathToFile(){
    QFile file (".configRoot");

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return false;

    QTextStream writer(&file);
    writer.setCodec("UTF-8");
    writer<<rootPath;
    file.close();
    return true;
}

bool MainWindow::loadRoothPath(){
    QFile file (".configRoot");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream flux(&file);

    QString pathName;

    while(!flux.atEnd()){
        pathName = flux.readLine();
        rootPath = pathName;
    }
    ui->rootPath->setText(rootPath);
    file.close();
    return true;
}

void MainWindow::on_removeTag_clicked()
{
    removeItemFromGrid();
 }


QString MainWindow::removeItemFromGrid(){
    for(int i= 0; i < grid->count(); i++){
        if (grid->itemAt(i)->widget())
            qDebug()<<"fdfdfdf";
    }

}

void MainWindow::InitFilter(){
    dirModelFilter = new QFileSystemModel();

    dirModelFilter->setReadOnly(true);
    dirModelFilter->setFilter(QDir::NoDotAndDotDot|QDir::Dirs);

    //add model to tree view
    ui->treeViewFilter->setModel(dirModelFilter);

    //
    ui->treeViewFilter->setColumnHidden(1,true);
    ui->treeViewFilter->setColumnHidden(2,true);
    ui->treeViewFilter->setColumnHidden(3,true);

    ExpandFilterNodes(rootPath);
}

void MainWindow::ExpandFilterNodes(QString path, bool select, bool clear)
{
    //ui->treeView->collapseAll();
    QModelIndex dirIndex = dirModelFilter->setRootPath(path);
    QModelIndex parentDir = dirModelFilter->parent(dirIndex);

    if(clear){
        ui->treeViewFilter->selectionModel()->clearSelection();
        ui->treeViewFilter->collapseAll();
    }

    if(select)
        ui->treeViewFilter->selectionModel()->select(dirIndex, QItemSelectionModel::Select | QItemSelectionModel::Rows);
    ui->treeViewFilter->expand(dirModelFilter->parent(dirIndex));
    //expand root
    ui->treeViewFilter->expand(dirIndex);
    //then expand all parents
    while(parentDir.isValid()){
        ui->treeViewFilter->expand(parentDir);
        parentDir = parentDir.parent();
    }

}

void MainWindow::initFileFilterView(){
    fileFilterView = new QGridLayout();
    fileFilterView->setAlignment(Qt::AlignTop);
    fileFilterView->setSpacing(20);

    widgetFileFilterView = new QWidget();
    widgetFileFilterView->setLayout(fileFilterView);
    widgetFileFilterView->setMaximumWidth(740);

    ui->scrollFiltering->setWidget(widgetFileFilterView);
}

void MainWindow::SetFilterFiles(QStringList filesFiltered){
    clearFileFilterView();

    foreach(QString path, filesFiltered){
        QFileInfo info(path);
        QFileIconProvider ip;
        QIcon icon;
        if(info.isFile())
            icon = ip.icon(QFileIconProvider::File);
        else
            icon = ip.icon(QFileIconProvider::Folder);

        addFileToFilterView(info.fileName(), icon);
        ExpandFilterNodes(path,true);
    }

    //QStringList paths = QDir(path).entryList(QDir::NoDotAndDotDot|QDir::Dirs|QDir::Files);

}

void MainWindow::addFileToFilterView(QString fileName, QIcon fileIcon){
    filterJ++;
    if(filterJ == 6){
        filterJ = 0;
        filterI++;
    }
    FileComponent* comp = new FileComponent(fileName, fileIcon, this, false);

    fileFilterView->addWidget(comp, filterI, filterJ);
    comp->show(); //SALOPERIE !!!
}

void MainWindow::clearFileFilterView()
{
    filterI = 0;
    filterJ = 0;

    QLayoutItem *child;
    while ((child = fileFilterView->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }

}



void MainWindow::on_searchTag_3_editingFinished()
{
    ExpandFilterNodes(rootPath,false, true);
    QStringList filesResult;

    QString query = ui->searchTag_3->text();
    QStringList searchTags(query.split(' '));

    foreach(QString tag, searchTags){
        QStringList results(tagger->searchFilesFromTag(tag));
        foreach(QString foundTag, results){
            filesResult.append(foundTag);
        }
    }

    SetFilterFiles(filesResult);
}
