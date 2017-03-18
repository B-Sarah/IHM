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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
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
    QFrame *frame_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *newTag;
    QPushButton *EditTag;
    QPushButton *removeTag;
    QLineEdit *lineEdit_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFrame *frame;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *next;
    QWidget *tabFilter;
    QWidget *tab;
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
        QFont font;
        font.setPointSize(13);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab{height:40px; width:347px}\n"
"QTabBar::tab:selected{background-color:white;}\n"
"QTabBar::tab:last { height:40px; width:60px;}\n"
"QTabBar::tab:disabled { border:none;width:286px}\n"
"var _tab = mywindow.findChild(\"_tab\");\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(45, 35));
        tabWidget->setElideMode(Qt::ElideNone);
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
        lineEdit->setGeometry(QRect(80, 10, 688, 25));
        lineEdit->setMinimumSize(QSize(628, 25));
        frame_2 = new QFrame(tag);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 499, 261, 171));
        frame_2->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 241, 154));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newTag = new QPushButton(widget);
        newTag->setObjectName(QStringLiteral("newTag"));
        newTag->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(newTag);

        EditTag = new QPushButton(widget);
        EditTag->setObjectName(QStringLiteral("EditTag"));
        EditTag->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(EditTag);

        removeTag = new QPushButton(widget);
        removeTag->setObjectName(QStringLiteral("removeTag"));
        removeTag->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(removeTag);

        EditTag->raise();
        removeTag->raise();
        newTag->raise();
        newTag->raise();
        EditTag->raise();
        lineEdit_2 = new QLineEdit(tag);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(775, 10, 251, 25));
        scrollArea = new QScrollArea(tag);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(280, 430, 746, 241));
        scrollArea->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 744, 239));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 746, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 6, 81, 21));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(705, 0, 41, 31));
        comboBox->setEditable(true);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(515, 0, 191, 31));
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget1 = new QWidget(tag);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 64, 26));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(widget1);
        back->setObjectName(QStringLiteral("back"));
        QIcon icon;
        icon.addFile(QStringLiteral("back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);

        horizontalLayout->addWidget(back);

        next = new QPushButton(widget1);
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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        para = new QWidget();
        para->setObjectName(QStringLiteral("para"));
        para->setContextMenuPolicy(Qt::CustomContextMenu);
        para->setLayoutDirection(Qt::LeftToRight);
        para->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral("preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(para, icon2, QString());
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
        newTag->setText(QApplication::translate("MainWindow", "New tag", Q_NULLPTR));
        EditTag->setText(QApplication::translate("MainWindow", "Edit tag", Q_NULLPTR));
        removeTag->setText(QApplication::translate("MainWindow", "Remove tag(s)", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>List of  tags</p></body></html>", Q_NULLPTR));
        comboBox->setCurrentText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        back->setText(QString());
        next->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tag), QApplication::translate("MainWindow", "File tagging ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFilter), QApplication::translate("MainWindow", "File filtering", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        tabWidget->setTabText(tabWidget->indexOf(para), QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
