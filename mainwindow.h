// MainWindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "PasswordManager.h"
#include <QSortFilterProxyModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // 菜单操作
    void on_actionBackup_triggered();
    void on_actionRestore_triggered();
    void on_actionAbout_triggered();

    // 按钮操作
    void on_btnAdd_clicked();
    void on_btnEdit_clicked();
    void on_btnDelete_clicked();

    // 类别筛选
    void on_listCategory_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    PasswordManager* m_pwdManager;
    QSortFilterProxyModel* m_proxyModel; // 筛选代理模型

    // 初始化UI
    void initUI();
    // 刷新类别列表
    void refreshCategoryList();
    // 刷新账号列表
    void refreshAccountList(const QString& category = "");
    // 显示添加/编辑账号对话框
    bool showAccountDialog(AccountInfo& account, bool isEdit = false);
};

#endif // MAINWINDOW_H
