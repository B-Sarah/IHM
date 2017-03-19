#ifndef TAGDESIGN_H
#define TAGDESIGN_H

#include "tagger.h"
#include <QWidget>


namespace Ui {
class TagDesign;
}

class TagDesign : public QWidget
{
    Q_OBJECT

public:
    explicit TagDesign(QWidget *parent = 0);
    explicit TagDesign(Tagger* tagger, QWidget *parent = 0);
    ~TagDesign();

    void setText(QString txt);
    void setEditSelected();
    void setEdit(bool edit);

private slots:
    void createTag();


private:
     Ui::TagDesign *ui;
     Tagger* tagger;

};

#endif // TAGDESIGN_H
