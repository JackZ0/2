/********************************************************************************
** Form generated from reading UI file 'snap.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNAP_H
#define UI_SNAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_snap
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *screenlabel;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *savepicpushButton;
    QPushButton *exitpushButton;

    void setupUi(QDialog *snap)
    {
        if (snap->objectName().isEmpty())
            snap->setObjectName(QStringLiteral("snap"));
        snap->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(snap);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        screenlabel = new QLabel(snap);
        screenlabel->setObjectName(QStringLiteral("screenlabel"));

        verticalLayout_2->addWidget(screenlabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(snap);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(snap);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox = new QSpinBox(snap);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_2->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        checkBox = new QCheckBox(snap);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(snap);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        savepicpushButton = new QPushButton(snap);
        savepicpushButton->setObjectName(QStringLiteral("savepicpushButton"));

        horizontalLayout->addWidget(savepicpushButton);

        exitpushButton = new QPushButton(snap);
        exitpushButton->setObjectName(QStringLiteral("exitpushButton"));

        horizontalLayout->addWidget(exitpushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(snap);

        QMetaObject::connectSlotsByName(snap);
    } // setupUi

    void retranslateUi(QDialog *snap)
    {
        snap->setWindowTitle(QApplication::translate("snap", "Dialog", Q_NULLPTR));
        screenlabel->setText(QApplication::translate("snap", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("snap", "\345\273\266\346\227\266\351\200\211\351\241\271\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("snap", "\345\273\266\346\227\266\346\227\266\351\227\264\357\274\210S)\357\274\232", Q_NULLPTR));
        checkBox->setText(QApplication::translate("snap", "\346\230\257\345\220\246\345\273\266\346\227\266", Q_NULLPTR));
        pushButton->setText(QApplication::translate("snap", "\346\226\260\345\273\272\346\210\252\345\233\276", Q_NULLPTR));
        savepicpushButton->setText(QApplication::translate("snap", "\344\277\235\345\255\230\346\210\252\345\233\276", Q_NULLPTR));
        exitpushButton->setText(QApplication::translate("snap", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class snap: public Ui_snap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAP_H
