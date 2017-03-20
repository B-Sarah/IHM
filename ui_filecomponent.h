/********************************************************************************
** Form generated from reading UI file 'filecomponent.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECOMPONENT_H
#define UI_FILECOMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileComponent
{
public:
    QLineEdit *lineEdit;
    QLabel *name;
    QLabel *icon;

    void setupUi(QWidget *FileComponent)
    {
        if (FileComponent->objectName().isEmpty())
            FileComponent->setObjectName(QStringLiteral("FileComponent"));
        FileComponent->resize(100, 100);
        FileComponent->setMinimumSize(QSize(100, 100));
        FileComponent->setMaximumSize(QSize(100, 100));
        lineEdit = new QLineEdit(FileComponent);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 100, 100));
        lineEdit->setMinimumSize(QSize(100, 100));
        lineEdit->setMaximumSize(QSize(100, 100));
        lineEdit->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 0);\n"
"border:none;"));
        lineEdit->setReadOnly(true);
        name = new QLabel(FileComponent);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(1, 54, 98, 45));
        name->setMinimumSize(QSize(98, 45));
        name->setMaximumSize(QSize(98, 45));
        name->setScaledContents(false);
        name->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        name->setWordWrap(true);
        icon = new QLabel(FileComponent);
        icon->setObjectName(QStringLiteral("icon"));
        icon->setGeometry(QRect(27, 0, 45, 45));
        icon->setMinimumSize(QSize(45, 45));
        icon->setMaximumSize(QSize(45, 45));
        icon->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        retranslateUi(FileComponent);

        QMetaObject::connectSlotsByName(FileComponent);
    } // setupUi

    void retranslateUi(QWidget *FileComponent)
    {
        FileComponent->setWindowTitle(QApplication::translate("FileComponent", "Form", Q_NULLPTR));
        name->setText(QApplication::translate("FileComponent", "TextLabel", Q_NULLPTR));
        icon->setText(QApplication::translate("FileComponent", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileComponent: public Ui_FileComponent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECOMPONENT_H
