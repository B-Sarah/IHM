/********************************************************************************
** Form generated from reading UI file 'tagcompononent.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGCOMPONONENT_H
#define UI_TAGCOMPONONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tagCompononent
{
public:

    void setupUi(QWidget *tagCompononent)
    {
        if (tagCompononent->objectName().isEmpty())
            tagCompononent->setObjectName(QStringLiteral("tagCompononent"));
        tagCompononent->resize(400, 300);

        retranslateUi(tagCompononent);

        QMetaObject::connectSlotsByName(tagCompononent);
    } // setupUi

    void retranslateUi(QWidget *tagCompononent)
    {
        tagCompononent->setWindowTitle(QApplication::translate("tagCompononent", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tagCompononent: public Ui_tagCompononent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGCOMPONONENT_H
