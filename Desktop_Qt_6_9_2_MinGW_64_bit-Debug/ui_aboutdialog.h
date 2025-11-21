/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 271, 61));
        QFont font;
        font.setPointSize(28);
        label->setFont(font);
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(201, 153, 128, 16));
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(201, 184, 169, 16));
        label_5 = new QLabel(AboutDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 110, 111, 111));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/E:/qt/\345\233\276\346\240\207/\346\237\245\346\211\276.png);"));
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(201, 121, 84, 16));

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "\345\260\217\345\205\255\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "\345\255\246\345\217\267\357\274\2322023414290418", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "email\357\274\2322065660031@qq.com", nullptr));
        label_5->setText(QString());
        label_2->setText(QCoreApplication::translate("AboutDialog", "\345\274\200\345\217\221\350\200\205\357\274\232\346\235\216\346\231\237\350\210\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
