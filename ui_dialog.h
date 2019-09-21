/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *noButton;
    QPushButton *comeonButton;
    QLabel *movielabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 331, 71));
        label->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Aharoni\";\n"
"font: 14pt \"\346\245\267\344\275\223\";"));
        noButton = new QPushButton(Dialog);
        noButton->setObjectName(QStringLiteral("noButton"));
        noButton->setGeometry(QRect(50, 270, 75, 23));
        comeonButton = new QPushButton(Dialog);
        comeonButton->setObjectName(QStringLiteral("comeonButton"));
        comeonButton->setGeometry(QRect(290, 270, 75, 23));
        movielabel = new QLabel(Dialog);
        movielabel->setObjectName(QStringLiteral("movielabel"));
        movielabel->setGeometry(QRect(30, 110, 341, 141));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p>\347\211\210\346\235\203\346\211\200\346\234\211\357\274\214\347\233\227\347\211\210\345\277\205\347\251\266\357\274\201\347\211\210\346\235\203\345\275\222\346\210\221\346\211\200\346\234\211\357\274\201\357\274\201\357\274\201</p><p>\344\275\240\350\277\230\346\225\242\347\233\227\347\211\210\345\220\227\357\274\237</p></body></html>", Q_NULLPTR));
        noButton->setText(QApplication::translate("Dialog", "\344\270\215\346\225\242\344\272\206", Q_NULLPTR));
        comeonButton->setText(QApplication::translate("Dialog", "\346\224\276\351\251\254\350\277\207\346\235\245\345\220\247", Q_NULLPTR));
        movielabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
