/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *searchText;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbCaseSensetive;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbUp;
    QRadioButton *rbDown;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btFindfNext;
    QPushButton *btCancel;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName("SearchDialog");
        SearchDialog->resize(366, 119);
        layoutWidget = new QWidget(SearchDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 248, 87));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        searchText = new QLineEdit(layoutWidget);
        searchText->setObjectName("searchText");

        horizontalLayout->addWidget(searchText);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cbCaseSensetive = new QCheckBox(layoutWidget);
        cbCaseSensetive->setObjectName("cbCaseSensetive");

        horizontalLayout_3->addWidget(cbCaseSensetive);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rbUp = new QRadioButton(groupBox);
        rbUp->setObjectName("rbUp");

        horizontalLayout_2->addWidget(rbUp);

        rbDown = new QRadioButton(groupBox);
        rbDown->setObjectName("rbDown");

        horizontalLayout_2->addWidget(rbDown);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(SearchDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(260, 10, 91, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btFindfNext = new QPushButton(layoutWidget1);
        btFindfNext->setObjectName("btFindfNext");

        verticalLayout_2->addWidget(btFindfNext);

        btCancel = new QPushButton(layoutWidget1);
        btCancel->setObjectName("btCancel");

        verticalLayout_2->addWidget(btCancel);


        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QCoreApplication::translate("SearchDialog", "\346\237\245\346\211\276", nullptr));
        label->setText(QCoreApplication::translate("SearchDialog", "\346\237\245\346\211\276\347\233\256\346\240\207\357\274\232", nullptr));
        cbCaseSensetive->setText(QCoreApplication::translate("SearchDialog", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SearchDialog", "\346\226\271\345\220\221\357\274\232", nullptr));
        rbUp->setText(QCoreApplication::translate("SearchDialog", "\345\220\221\344\270\212(U)", nullptr));
        rbDown->setText(QCoreApplication::translate("SearchDialog", "\345\220\221\344\270\213(D)", nullptr));
        btFindfNext->setText(QCoreApplication::translate("SearchDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252(F)", nullptr));
        btCancel->setText(QCoreApplication::translate("SearchDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
