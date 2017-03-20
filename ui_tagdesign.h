/********************************************************************************
** Form generated from reading UI file 'tagdesign.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGDESIGN_H
#define UI_TAGDESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TagDesign
{
public:
    QLineEdit *editTag;
    QCheckBox *checkTag;
    QLineEdit *tagName;

    void setupUi(QWidget *TagDesign)
    {
        if (TagDesign->objectName().isEmpty())
            TagDesign->setObjectName(QStringLiteral("TagDesign"));
        TagDesign->resize(119, 31);
        TagDesign->setMinimumSize(QSize(110, 31));
        TagDesign->setMaximumSize(QSize(200, 50));
        TagDesign->setStyleSheet(QStringLiteral(""));
        editTag = new QLineEdit(TagDesign);
        editTag->setObjectName(QStringLiteral("editTag"));
        editTag->setGeometry(QRect(0, 0, 119, 31));
        editTag->setReadOnly(true);
        checkTag = new QCheckBox(TagDesign);
        checkTag->setObjectName(QStringLiteral("checkTag"));
        checkTag->setGeometry(QRect(6, 7, 20, 21));
        checkTag->setStyleSheet(QStringLiteral(""));
        tagName = new QLineEdit(TagDesign);
        tagName->setObjectName(QStringLiteral("tagName"));
        tagName->setGeometry(QRect(25, 4, 91, 25));
        tagName->setLayoutDirection(Qt::RightToLeft);
        tagName->setMaxLength(12);
        tagName->setFrame(false);
        tagName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        QWidget::setTabOrder(checkTag, tagName);
        QWidget::setTabOrder(tagName, editTag);

        retranslateUi(TagDesign);

        QMetaObject::connectSlotsByName(TagDesign);
    } // setupUi

    void retranslateUi(QWidget *TagDesign)
    {
        TagDesign->setWindowTitle(QApplication::translate("TagDesign", "Form", Q_NULLPTR));
        checkTag->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TagDesign: public Ui_TagDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGDESIGN_H
