/********************************************************************************
** Form generated from reading UI file 'fileinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEINFO_H
#define UI_FILEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileinfo
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *filesizelineEdit;
    QLineEdit *createtimelineEdit;
    QLineEdit *LastAccesslineEdit;
    QLineEdit *isDirlineEdit;
    QPushButton *openpushButton;
    QPushButton *exitpushButton;

    void setupUi(QDialog *fileinfo)
    {
        if (fileinfo->objectName().isEmpty())
            fileinfo->setObjectName(QStringLiteral("fileinfo"));
        fileinfo->resize(400, 300);
        formLayoutWidget = new QWidget(fileinfo);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 21, 341, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        filesizelineEdit = new QLineEdit(formLayoutWidget);
        filesizelineEdit->setObjectName(QStringLiteral("filesizelineEdit"));

        verticalLayout_2->addWidget(filesizelineEdit);

        createtimelineEdit = new QLineEdit(formLayoutWidget);
        createtimelineEdit->setObjectName(QStringLiteral("createtimelineEdit"));

        verticalLayout_2->addWidget(createtimelineEdit);

        LastAccesslineEdit = new QLineEdit(formLayoutWidget);
        LastAccesslineEdit->setObjectName(QStringLiteral("LastAccesslineEdit"));

        verticalLayout_2->addWidget(LastAccesslineEdit);

        isDirlineEdit = new QLineEdit(formLayoutWidget);
        isDirlineEdit->setObjectName(QStringLiteral("isDirlineEdit"));

        verticalLayout_2->addWidget(isDirlineEdit);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        openpushButton = new QPushButton(fileinfo);
        openpushButton->setObjectName(QStringLiteral("openpushButton"));
        openpushButton->setGeometry(QRect(130, 250, 75, 23));
        exitpushButton = new QPushButton(fileinfo);
        exitpushButton->setObjectName(QStringLiteral("exitpushButton"));
        exitpushButton->setGeometry(QRect(280, 250, 75, 23));

        retranslateUi(fileinfo);

        QMetaObject::connectSlotsByName(fileinfo);
    } // setupUi

    void retranslateUi(QDialog *fileinfo)
    {
        fileinfo->setWindowTitle(QApplication::translate("fileinfo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("fileinfo", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("fileinfo", "\346\226\207\344\273\266\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("fileinfo", "\346\234\200\345\220\216\350\256\277\351\227\256\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("fileinfo", "\346\230\257\345\220\246\344\270\272\347\233\256\345\275\225\357\274\232", Q_NULLPTR));
        openpushButton->setText(QApplication::translate("fileinfo", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        exitpushButton->setText(QApplication::translate("fileinfo", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fileinfo: public Ui_fileinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEINFO_H
