/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_list
{
public:
    QListWidget *listWidget;
    QPushButton *addpushbutton;
    QPushButton *deletepushButton;
    QLineEdit *companylineEdit;
    QPushButton *deleteAllpushButton;

    void setupUi(QDialog *list)
    {
        if (list->objectName().isEmpty())
            list->setObjectName(QStringLiteral("list"));
        list->resize(400, 316);
        listWidget = new QListWidget(list);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 371, 241));
        addpushbutton = new QPushButton(list);
        addpushbutton->setObjectName(QStringLiteral("addpushbutton"));
        addpushbutton->setGeometry(QRect(140, 260, 75, 23));
        deletepushButton = new QPushButton(list);
        deletepushButton->setObjectName(QStringLiteral("deletepushButton"));
        deletepushButton->setGeometry(QRect(220, 260, 75, 23));
        companylineEdit = new QLineEdit(list);
        companylineEdit->setObjectName(QStringLiteral("companylineEdit"));
        companylineEdit->setGeometry(QRect(20, 260, 113, 20));
        deleteAllpushButton = new QPushButton(list);
        deleteAllpushButton->setObjectName(QStringLiteral("deleteAllpushButton"));
        deleteAllpushButton->setGeometry(QRect(310, 260, 75, 23));

        retranslateUi(list);

        QMetaObject::connectSlotsByName(list);
    } // setupUi

    void retranslateUi(QDialog *list)
    {
        list->setWindowTitle(QApplication::translate("list", "Dialog", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("list", "\347\231\276\345\272\246", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("list", "\351\230\277\351\207\214", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("list", "\350\205\276\350\256\257", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        addpushbutton->setText(QApplication::translate("list", "\346\267\273\345\212\240", Q_NULLPTR));
        deletepushButton->setText(QApplication::translate("list", "\345\210\240\351\231\244", Q_NULLPTR));
        deleteAllpushButton->setText(QApplication::translate("list", "\345\205\250\351\203\250\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class list: public Ui_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
