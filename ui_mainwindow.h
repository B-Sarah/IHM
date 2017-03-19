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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *newTag;
    QPushButton *EditTag;
    QPushButton *removeTag;
    QScrollArea *scrollArea;
    QWidget *widget;
    QFrame *frame;
    QLabel *label;
    QComboBox *sortTag;
    QFrame *frame_3;
    QLineEdit *searchTag;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back_2;
    QPushButton *next_2;
    QScrollArea *scrollTag;
    QWidget *scrollAreaWidgetContents;
    QFrame *frame_4;
    QLineEdit *searchFile;
    QLabel *label_4;
    QWidget *layoutWidget1;
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
"QTabBar::tab:disabled { border:none;width:286px;}\n"
"var _tab = mywindow.findChild(\"_tab\");\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(45, 35));
        tabWidget->setElideMode(Qt::ElideMiddle);
        tag = new QWidget();
        tag->setObjectName(QStringLiteral("tag"));
        tag->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        treeView = new QTreeView(tag);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(10, 40, 261, 451));
        listView = new QListView(tag);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(278, 40, 746, 381));
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
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 241, 154));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newTag = new QPushButton(layoutWidget);
        newTag->setObjectName(QStringLiteral("newTag"));
        newTag->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(newTag);

        EditTag = new QPushButton(layoutWidget);
        EditTag->setObjectName(QStringLiteral("EditTag"));
        EditTag->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(EditTag);

        removeTag = new QPushButton(layoutWidget);
        removeTag->setObjectName(QStringLiteral("removeTag"));
        removeTag->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(removeTag);

        scrollArea = new QScrollArea(tag);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(278, 430, 746, 241));
        scrollArea->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setWidgetResizable(true);
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 742, 237));
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-2, -2, 746, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 6, 81, 21));
        sortTag = new QComboBox(frame);
        sortTag->setObjectName(QStringLiteral("sortTag"));
        sortTag->setGeometry(QRect(695, 0, 51, 31));
        sortTag->setEditable(true);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(461, 0, 235, 31));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        searchTag = new QLineEdit(frame_3);
        searchTag->setObjectName(QStringLiteral("searchTag"));
        searchTag->setGeometry(QRect(20, 5, 213, 21));
        searchTag->setStyleSheet(QStringLiteral("border:0;"));
        searchTag->setCursorPosition(0);
        searchTag->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1, 5, 21, 21));
        label_2->setPixmap(QPixmap(QString::fromUtf8("search.png")));
        label_2->setScaledContents(true);
        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(390, 5, 64, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        back_2 = new QPushButton(layoutWidget_2);
        back_2->setObjectName(QStringLiteral("back_2"));
        QIcon icon;
        icon.addFile(QStringLiteral("undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        back_2->setIcon(icon);

        horizontalLayout_2->addWidget(back_2);

        next_2 = new QPushButton(layoutWidget_2);
        next_2->setObjectName(QStringLiteral("next_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        next_2->setIcon(icon1);

        horizontalLayout_2->addWidget(next_2);

        scrollTag = new QScrollArea(widget);
        scrollTag->setObjectName(QStringLiteral("scrollTag"));
        scrollTag->setGeometry(QRect(9, 39, 731, 191));
        scrollTag->setFrameShape(QFrame::NoFrame);
        scrollTag->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 731, 191));
        scrollTag->setWidget(scrollAreaWidgetContents);
        scrollArea->setWidget(widget);
        frame_4 = new QFrame(tag);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(774, 10, 250, 25));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        searchFile = new QLineEdit(frame_4);
        searchFile->setObjectName(QStringLiteral("searchFile"));
        searchFile->setGeometry(QRect(20, 5, 213, 16));
        searchFile->setStyleSheet(QStringLiteral("border:0;"));
        searchFile->setCursorPosition(0);
        searchFile->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1, 4, 21, 19));
        label_4->setPixmap(QPixmap(QString::fromUtf8("search.png")));
        label_4->setScaledContents(true);
        layoutWidget1 = new QWidget(tag);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 64, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(layoutWidget1);
        back->setObjectName(QStringLiteral("back"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon2);

        horizontalLayout->addWidget(back);

        next = new QPushButton(layoutWidget1);
        next->setObjectName(QStringLiteral("next"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("next.png"), QSize(), QIcon::Normal, QIcon::Off);
        next->setIcon(icon3);

        horizontalLayout->addWidget(next);

        tabWidget->addTab(tag, QString());
        layoutWidget->raise();
        treeView->raise();
        listView->raise();
        lineEdit->raise();
        frame_2->raise();
        scrollArea->raise();
        frame_4->raise();
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
        QIcon icon4;
        icon4.addFile(QStringLiteral("preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(para, icon4, QString());
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
        removeTag->setText(QApplication::translate("MainWindow", "Remove tag", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>List of  tags</p></body></html>", Q_NULLPTR));
        sortTag->clear();
        sortTag->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "A-Z", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Z-A", Q_NULLPTR)
        );
        sortTag->setCurrentText(QApplication::translate("MainWindow", "A-Z", Q_NULLPTR));
        searchTag->setPlaceholderText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        label_2->setText(QString());
        back_2->setText(QString());
        next_2->setText(QString());
        searchFile->setPlaceholderText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        label_4->setText(QString());
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
