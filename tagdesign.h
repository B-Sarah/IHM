#ifndef TAGDESIGN_H
#define TAGDESIGN_H

#include <QWidget>
#include <mainwindow.h>

class MainWindow;

namespace Ui {
class TagDesign;
}

class TagDesign : public QWidget
{
    Q_OBJECT

public:
    explicit TagDesign(QWidget *parent = 0);
    explicit TagDesign(MainWindow* main, QWidget *parent = 0);
    ~TagDesign();

    void setText(QString txt);
    void setEditSelected();
    void setEdit(bool edit);

    bool setCheckbox(bool state);
    bool setCkecked(bool state);

    QString getText();
private slots:
    void createTag();


    void on_checkTag_toggled(bool checked);

private:
     Ui::TagDesign *ui;
     MainWindow* main;

     bool isSelected;

     bool event(QEvent *event);

     void setSelectedStyle(bool state);
};

#endif // TAGDESIGN_H
