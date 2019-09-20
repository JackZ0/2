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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionxianjian;
    QAction *newaction;
    QAction *openaction;
    QAction *saveaction;
    QAction *saveasaction;
    QAction *action5;
    QAction *action5_2;
    QAction *printaction;
    QAction *exitaction;
    QAction *copyaction;
    QAction *pastaction;
    QAction *undoaction;
    QAction *cutaction;
    QAction *deleteaction;
    QAction *findactioon;
    QAction *actionzid;
    QAction *fontaction;
    QAction *actionzhua;
    QAction *actionchak;
    QAction *actiona;
    QAction *datetimeaction;
    QAction *coloraction;
    QAction *SelectAllaction;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_O;
    QMenu *menu_H;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionxianjian = new QAction(MainWindow);
        actionxianjian->setObjectName(QStringLiteral("actionxianjian"));
        newaction = new QAction(MainWindow);
        newaction->setObjectName(QStringLiteral("newaction"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/new.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        newaction->setIcon(icon);
        openaction = new QAction(MainWindow);
        openaction->setObjectName(QStringLiteral("openaction"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openaction->setIcon(icon1);
        saveaction = new QAction(MainWindow);
        saveaction->setObjectName(QStringLiteral("saveaction"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        saveaction->setIcon(icon2);
        saveasaction = new QAction(MainWindow);
        saveasaction->setObjectName(QStringLiteral("saveasaction"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/saveas.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        saveasaction->setIcon(icon3);
        action5 = new QAction(MainWindow);
        action5->setObjectName(QStringLiteral("action5"));
        action5_2 = new QAction(MainWindow);
        action5_2->setObjectName(QStringLiteral("action5_2"));
        printaction = new QAction(MainWindow);
        printaction->setObjectName(QStringLiteral("printaction"));
        exitaction = new QAction(MainWindow);
        exitaction->setObjectName(QStringLiteral("exitaction"));
        copyaction = new QAction(MainWindow);
        copyaction->setObjectName(QStringLiteral("copyaction"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/copy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        copyaction->setIcon(icon4);
        pastaction = new QAction(MainWindow);
        pastaction->setObjectName(QStringLiteral("pastaction"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/paste.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pastaction->setIcon(icon5);
        undoaction = new QAction(MainWindow);
        undoaction->setObjectName(QStringLiteral("undoaction"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/undo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        undoaction->setIcon(icon6);
        cutaction = new QAction(MainWindow);
        cutaction->setObjectName(QStringLiteral("cutaction"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutaction->setIcon(icon7);
        deleteaction = new QAction(MainWindow);
        deleteaction->setObjectName(QStringLiteral("deleteaction"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/delete.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteaction->setIcon(icon8);
        findactioon = new QAction(MainWindow);
        findactioon->setObjectName(QStringLiteral("findactioon"));
        actionzid = new QAction(MainWindow);
        actionzid->setObjectName(QStringLiteral("actionzid"));
        fontaction = new QAction(MainWindow);
        fontaction->setObjectName(QStringLiteral("fontaction"));
        actionzhua = new QAction(MainWindow);
        actionzhua->setObjectName(QStringLiteral("actionzhua"));
        actionchak = new QAction(MainWindow);
        actionchak->setObjectName(QStringLiteral("actionchak"));
        actiona = new QAction(MainWindow);
        actiona->setObjectName(QStringLiteral("actiona"));
        datetimeaction = new QAction(MainWindow);
        datetimeaction->setObjectName(QStringLiteral("datetimeaction"));
        coloraction = new QAction(MainWindow);
        coloraction->setObjectName(QStringLiteral("coloraction"));
        SelectAllaction = new QAction(MainWindow);
        SelectAllaction->setObjectName(QStringLiteral("SelectAllaction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("border-image: url(:/img/bodyimg.jpg);"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_O = new QMenu(menuBar);
        menu_O->setObjectName(QStringLiteral("menu_O"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_O->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu->addAction(newaction);
        menu->addAction(openaction);
        menu->addAction(saveaction);
        menu->addAction(saveasaction);
        menu->addSeparator();
        menu->addAction(printaction);
        menu->addSeparator();
        menu->addAction(exitaction);
        menu_2->addAction(copyaction);
        menu_2->addAction(pastaction);
        menu_2->addAction(undoaction);
        menu_2->addAction(cutaction);
        menu_2->addAction(deleteaction);
        menu_2->addAction(findactioon);
        menu_2->addAction(SelectAllaction);
        menu_2->addAction(datetimeaction);
        menu_O->addAction(actionzid);
        menu_O->addAction(fontaction);
        menu_O->addAction(coloraction);
        menu_H->addAction(actionchak);
        menu_H->addAction(actiona);
        menu_3->addAction(actionzhua);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionxianjian->setText(QApplication::translate("MainWindow", "new", Q_NULLPTR));
        newaction->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", Q_NULLPTR));
        openaction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\357\274\210&O)", Q_NULLPTR));
        saveaction->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\357\274\210&S)", Q_NULLPTR));
        saveasaction->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", Q_NULLPTR));
        action5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        action5_2->setText(QApplication::translate("MainWindow", "\351\241\265\351\235\242\350\256\276\347\275\256\357\274\210&U\357\274\211", Q_NULLPTR));
        printaction->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\357\274\210&P)", Q_NULLPTR));
        exitaction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\357\274\210&X\357\274\211", Q_NULLPTR));
        copyaction->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
        pastaction->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
        undoaction->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
        cutaction->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
        deleteaction->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        findactioon->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
        actionzid->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", Q_NULLPTR));
        fontaction->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223", Q_NULLPTR));
        actionzhua->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217", Q_NULLPTR));
        actionchak->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251", Q_NULLPTR));
        actiona->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\256\260\344\272\213\346\234\254", Q_NULLPTR));
        datetimeaction->setText(QApplication::translate("MainWindow", "\346\227\245\346\234\237", Q_NULLPTR));
        coloraction->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262", Q_NULLPTR));
        SelectAllaction->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211\357\274\210&A)", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", Q_NULLPTR));
        menu_O->setTitle(QApplication::translate("MainWindow", "\346\240\274\345\274\217\357\274\210&O)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("MainWindow", "\346\237\245\347\234\213\357\274\210&V\357\274\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
