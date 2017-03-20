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
    QWidget *scrollAreaWidgetContents_5;
    QFrame *frame_4;
    QLineEdit *searchFile;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *next;
    QFrame *frame_14;
    QScrollArea *scrollFolder;
    QWidget *scrollAreaWidgetContents_6;
    QWidget *tabFilter;
    QFrame *frame_5;
    QFrame *frame_6;
    QTreeView *treeViewFilter;
    QFrame *frame_7;
    QFrame *frame_8;
    QLabel *label_6;
    QLabel *label_5;
    QFrame *frame_11;
    QLineEdit *searchTag_3;
    QLabel *label_7;
    QFrame *frame_12;
    QLineEdit *searchTag_4;
    QLabel *label_8;
    QPushButton *pushButton;
    QLabel *label_9;
    QListView *listView_2;
    QScrollArea *scrollFiltering;
    QWidget *scrollAreaWidgetContents;
    QWidget *tab;
    QWidget *para;
    QFrame *frame_13;
    QLabel *label_10;
    QFrame *line;
    QLineEdit *rootPath;
    QLabel *label_15;
    QPushButton *confirm;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
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
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab{height:40px; width:347px;}\n"
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
        treeView->header()->setVisible(false);
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
        layoutWidget_2->setGeometry(QRect(403, 5, 64, 26));
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
        scrollTag->setGeometry(QRect(-1, 28, 744, 211));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollTag->sizePolicy().hasHeightForWidth());
        scrollTag->setSizePolicy(sizePolicy);
        scrollTag->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollTag->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollTag->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 728, 209));
        scrollTag->setWidget(scrollAreaWidgetContents_5);
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

        frame_14 = new QFrame(tag);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setGeometry(QRect(278, 40, 745, 381));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        scrollFolder = new QScrollArea(frame_14);
        scrollFolder->setObjectName(QStringLiteral("scrollFolder"));
        scrollFolder->setGeometry(QRect(0, 0, 745, 381));
        sizePolicy.setHeightForWidth(scrollFolder->sizePolicy().hasHeightForWidth());
        scrollFolder->setSizePolicy(sizePolicy);
        scrollFolder->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollFolder->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollFolder->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 729, 379));
        scrollFolder->setWidget(scrollAreaWidgetContents_6);
        tabWidget->addTab(tag, QString());
        layoutWidget->raise();
        treeView->raise();
        lineEdit->raise();
        frame_2->raise();
        scrollArea->raise();
        frame_4->raise();
        frame_14->raise();
        tabFilter = new QWidget();
        tabFilter->setObjectName(QStringLiteral("tabFilter"));
        tabFilter->setStyleSheet(QStringLiteral(""));
        frame_5 = new QFrame(tabFilter);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(-1, -1, 1041, 681));
        frame_5->setStyleSheet(QStringLiteral("background-color:transparent;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(-1, -1, 1041, 691));
        frame_6->setStyleSheet(QStringLiteral("Background-color:white;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        treeViewFilter = new QTreeView(frame_6);
        treeViewFilter->setObjectName(QStringLiteral("treeViewFilter"));
        treeViewFilter->setGeometry(QRect(10, 20, 261, 641));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeViewFilter->sizePolicy().hasHeightForWidth());
        treeViewFilter->setSizePolicy(sizePolicy1);
        treeViewFilter->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        treeViewFilter->header()->setVisible(false);
        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(279, 19, 751, 641));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(10, 30, 721, 131));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 50, 51, 31));
        label_6->setFrameShape(QFrame::NoFrame);
        label_6->setFrameShadow(QFrame::Plain);
        label_5 = new QLabel(frame_8);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 41, 31));
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setFrameShadow(QFrame::Plain);
        frame_11 = new QFrame(frame_8);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(70, 10, 621, 31));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        searchTag_3 = new QLineEdit(frame_11);
        searchTag_3->setObjectName(QStringLiteral("searchTag_3"));
        searchTag_3->setGeometry(QRect(20, 5, 591, 21));
        searchTag_3->setStyleSheet(QStringLiteral("border:0;"));
        searchTag_3->setCursorPosition(0);
        searchTag_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_7 = new QLabel(frame_11);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1, 5, 21, 21));
        label_7->setPixmap(QPixmap(QString::fromUtf8("search.png")));
        label_7->setScaledContents(true);
        frame_12 = new QFrame(frame_8);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(70, 50, 621, 31));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        searchTag_4 = new QLineEdit(frame_12);
        searchTag_4->setObjectName(QStringLiteral("searchTag_4"));
        searchTag_4->setGeometry(QRect(20, 5, 591, 21));
        searchTag_4->setStyleSheet(QStringLiteral("border:0;"));
        searchTag_4->setCursorPosition(0);
        searchTag_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(frame_12);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1, 5, 21, 21));
        label_8->setPixmap(QPixmap(QString::fromUtf8("search.png")));
        label_8->setScaledContents(true);
        pushButton = new QPushButton(frame_8);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 90, 61, 25));
        label_9 = new QLabel(frame_7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 67, 17));
        label_9->setFont(font);
        listView_2 = new QListView(frame_7);
        listView_2->setObjectName(QStringLiteral("listView_2"));
        listView_2->setGeometry(QRect(10, 170, 721, 461));
        scrollFiltering = new QScrollArea(frame_7);
        scrollFiltering->setObjectName(QStringLiteral("scrollFiltering"));
        scrollFiltering->setGeometry(QRect(10, 170, 721, 461));
        sizePolicy1.setHeightForWidth(scrollFiltering->sizePolicy().hasHeightForWidth());
        scrollFiltering->setSizePolicy(sizePolicy1);
        scrollFiltering->setMinimumSize(QSize(721, 461));
        scrollFiltering->setMaximumSize(QSize(721, 461));
        scrollFiltering->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollFiltering->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollFiltering->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 705, 459));
        scrollFiltering->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tabFilter, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        para = new QWidget();
        para->setObjectName(QStringLiteral("para"));
        para->setContextMenuPolicy(Qt::CustomContextMenu);
        para->setLayoutDirection(Qt::LeftToRight);
        para->setStyleSheet(QStringLiteral(""));
        frame_13 = new QFrame(para);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(0, 0, 1041, 691));
        frame_13->setStyleSheet(QStringLiteral("Background-color:white;"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(frame_13);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 20, 101, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        label_10->setFont(font1);
        line = new QFrame(frame_13);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 50, 1011, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        rootPath = new QLineEdit(frame_13);
        rootPath->setObjectName(QStringLiteral("rootPath"));
        rootPath->setGeometry(QRect(120, 74, 231, 31));
        label_15 = new QLabel(frame_13);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 80, 81, 17));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(true);
        label_15->setFont(font2);
        confirm = new QPushButton(frame_13);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(390, 74, 86, 29));
        QIcon icon4;
        icon4.addFile(QStringLiteral("preferences.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(para, icon4, QString());
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


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
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">File :</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Tag :</span></p></body></html>", Q_NULLPTR));
        searchTag_3->setPlaceholderText(QApplication::translate("MainWindow", "Search for tag", Q_NULLPTR));
        label_7->setText(QString());
        searchTag_4->setPlaceholderText(QApplication::translate("MainWindow", "Search for file", Q_NULLPTR));
        label_8->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Filter By: ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFilter), QApplication::translate("MainWindow", "File filtering", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        label_10->setText(QApplication::translate("MainWindow", "Preferences", Q_NULLPTR));
        rootPath->setText(QString());
        rootPath->setPlaceholderText(QApplication::translate("MainWindow", "Example : /home/Desktop/", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Root path :", Q_NULLPTR));
        confirm->setText(QApplication::translate("MainWindow", "Confirm", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(para), QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
