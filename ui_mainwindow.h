/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tag;
    QTreeView *treeView;
    QListView *listView;
    QLineEdit *lineEdit;
    QFrame *frame;
    QFrame *frame_2;
    QLineEdit *lineEdit_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *next;
    QWidget *tabFilter;
    QWidget *para;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1040, 720);
        MainWindow->setMinimumSize(QSize(1040, 720));
        MainWindow->setMaximumSize(QSize(1040, 720));
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1040, 720));
        centralWidget->setMaximumSize(QSize(1040, 720));
        centralWidget->setStyleSheet(QStringLiteral(""));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1040, 720));
        tabWidget->setMinimumSize(QSize(1040, 720));
        tabWidget->setMaximumSize(QSize(1040, 720));
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab{height:40px; width:350px}\n"
"QTabBar::tab:last { height:40px; width:60px;}\n"
"var _tab = mywindow.findChild(\"_tab\");\n"
""));
        tabWidget->setTabPosition(QTabWidget::North);
        tag = new QWidget();
        tag->setObjectName(QStringLiteral("tag"));
        tag->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        treeView = new QTreeView(tag);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 40, 261, 451));
        listView = new QListView(tag);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(280, 40, 746, 381));
        listView->setMinimumSize(QSize(746, 381));
        listView->setMaximumSize(QSize(746, 381));
        lineEdit = new QLineEdit(tag);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(85, 10, 661, 25));
        frame = new QFrame(tag);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(280, 430, 746, 241));
        frame->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(tag);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 499, 261, 171));
        frame_2->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(tag);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(754, 10, 272, 25));
        widget = new QWidget(tag);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 64, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(widget);
        back->setObjectName(QStringLiteral("back"));
        QIcon icon;
        icon.addFile(QStringLiteral("back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);

        horizontalLayout->addWidget(back);

        next = new QPushButton(widget);
        next->setObjectName(QStringLiteral("next"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("next.png"), QSize(), QIcon::Normal, QIcon::Off);
        next->setIcon(icon1);

        horizontalLayout->addWidget(next);

        tabWidget->addTab(tag, QString());
        tabFilter = new QWidget();
        tabFilter->setObjectName(QStringLiteral("tabFilter"));
        tabFilter->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(tabFilter, QString());
        para = new QWidget();
        para->setObjectName(QStringLiteral("para"));
        para->setLayoutDirection(Qt::LeftToRight);
        para->setStyleSheet(QStringLiteral("padding-right:40pt;qt sqt ttab q"));
        tabWidget->addTab(para, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        back->setText(QString());
        next->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tag), QApplication::translate("MainWindow", "File tagging ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFilter), QApplication::translate("MainWindow", "File filtering", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(para), QApplication::translate("MainWindow", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
