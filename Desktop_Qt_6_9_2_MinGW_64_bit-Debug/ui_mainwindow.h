/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <codeeditor.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionSaveAs;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionFind;
    QAction *action;
    QAction *actionFont;
    QAction *actionShowLineNumber;
    QAction *actionShowToolbar;
    QAction *actionShowStatusBar;
    QAction *actionLIneWrap;
    QAction *actionAbout;
    QAction *actionFontBackgroundColor;
    QAction *actionBackgroundColor;
    QAction *actionFontColor;
    QAction *actionSelectAll;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    CodeEditor *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *menu_V;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("\346\226\260\345\273\272");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\346\226\207\344\273\266.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        }
        actionNew->setIcon(icon);
        actionNew->setMenuRole(QAction::MenuRole::NoRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\346\226\207\344\273\266\345\244\271.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon1);
        actionOpen->setMenuRole(QAction::MenuRole::NoRole);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\202\250\345\255\230.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon2);
        actionSave->setMenuRole(QAction::MenuRole::NoRole);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\244\215\345\210\266.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon3);
        actionCopy->setMenuRole(QAction::MenuRole::NoRole);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\217\246\345\255\230.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveAs->setIcon(icon4);
        actionSaveAs->setMenuRole(QAction::MenuRole::NoRole);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\346\222\244\351\224\200.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon5);
        actionUndo->setMenuRole(QAction::MenuRole::NoRole);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\210\267\346\226\260.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon6);
        actionRedo->setMenuRole(QAction::MenuRole::NoRole);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\211\252\345\210\207.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon7);
        actionCut->setMenuRole(QAction::MenuRole::NoRole);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\347\262\230\350\264\264.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon8);
        actionPaste->setMenuRole(QAction::MenuRole::NoRole);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\346\237\245\346\211\276.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFind->setIcon(icon9);
        actionFind->setMenuRole(QAction::MenuRole::NoRole);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\244\247\345\206\231.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action->setIcon(icon10);
        action->setMenuRole(QAction::MenuRole::NoRole);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\255\227\344\275\223.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFont->setIcon(icon11);
        actionFont->setMenuRole(QAction::MenuRole::NoRole);
        actionShowLineNumber = new QAction(MainWindow);
        actionShowLineNumber->setObjectName("actionShowLineNumber");
        actionShowLineNumber->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\350\241\250\346\240\274.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShowLineNumber->setIcon(icon12);
        actionShowLineNumber->setMenuRole(QAction::MenuRole::NoRole);
        actionShowToolbar = new QAction(MainWindow);
        actionShowToolbar->setObjectName("actionShowToolbar");
        actionShowToolbar->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\345\267\245\345\205\267\346\240\217.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShowToolbar->setIcon(icon13);
        actionShowToolbar->setMenuRole(QAction::MenuRole::NoRole);
        actionShowStatusBar = new QAction(MainWindow);
        actionShowStatusBar->setObjectName("actionShowStatusBar");
        actionShowStatusBar->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/\347\212\266\346\200\201\346\240\217.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShowStatusBar->setIcon(icon14);
        actionShowStatusBar->setMenuRole(QAction::MenuRole::NoRole);
        actionLIneWrap = new QAction(MainWindow);
        actionLIneWrap->setObjectName("actionLIneWrap");
        actionLIneWrap->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/E:/qt/\345\233\276\346\240\207/1169680.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionLIneWrap->setIcon(icon15);
        actionLIneWrap->setMenuRole(QAction::MenuRole::NoRole);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionAbout->setIcon(icon9);
        actionAbout->setMenuRole(QAction::MenuRole::NoRole);
        actionFontBackgroundColor = new QAction(MainWindow);
        actionFontBackgroundColor->setObjectName("actionFontBackgroundColor");
        actionFontBackgroundColor->setEnabled(true);
        actionFontBackgroundColor->setMenuRole(QAction::MenuRole::NoRole);
        actionBackgroundColor = new QAction(MainWindow);
        actionBackgroundColor->setObjectName("actionBackgroundColor");
        actionBackgroundColor->setMenuRole(QAction::MenuRole::NoRole);
        actionFontColor = new QAction(MainWindow);
        actionFontColor->setObjectName("actionFontColor");
        actionFontColor->setMenuRole(QAction::MenuRole::NoRole);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName("actionSelectAll");
        actionSelectAll->setMenuRole(QAction::MenuRole::NoRole);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionExit->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        textEdit = new CodeEditor(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_O = new QMenu(menubar);
        menu_O->setObjectName("menu_O");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_O->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addAction(actionExit);
        menu_E->addAction(actionUndo);
        menu_E->addAction(actionRedo);
        menu_E->addAction(actionCut);
        menu_E->addAction(actionCopy);
        menu_E->addAction(actionPaste);
        menu_E->addAction(actionFind);
        menu_E->addAction(action);
        menu_E->addAction(actionSelectAll);
        menu_O->addAction(actionLIneWrap);
        menu_O->addAction(actionShowLineNumber);
        menu_O->addAction(actionFont);
        menu_O->addAction(actionFontColor);
        menu_O->addAction(actionBackgroundColor);
        menu_O->addAction(actionFontBackgroundColor);
        menu_V->addAction(actionShowToolbar);
        menu_V->addAction(actionShowStatusBar);
        menu_H->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAs);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionFind);
        toolBar->addAction(action);
        toolBar->addAction(actionFont);
        toolBar->addAction(actionShowLineNumber);
        toolBar->addAction(actionLIneWrap);
        toolBar->addAction(actionShowToolbar);
        toolBar->addAction(actionShowStatusBar);
        toolBar->addAction(actionAbout);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(N)", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\271", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
        actionFind->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242", nullptr));
#if QT_CONFIG(tooltip)
        action->setToolTip(QCoreApplication::translate("MainWindow", "\346\233\277\346\215\242", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
        actionShowLineNumber->setText(QCoreApplication::translate("MainWindow", "\350\241\214\346\225\260", nullptr));
        actionShowToolbar->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217", nullptr));
        actionShowStatusBar->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
        actionLIneWrap->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionFontBackgroundColor->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\345\231\250\350\203\214\346\231\257\350\211\262", nullptr));
        actionBackgroundColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\203\214\346\231\257\350\211\262", nullptr));
        actionFontColor->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        actionSelectAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(E)", nullptr));
        menu_O->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(O)", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213(V)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
