// PasswordManager.h
#ifndef PASSWORDMANAGER_H
#define PASSWORDMANAGER_H

#include "SqlRepository.h"
#include "EncryptionUtil.h"
#include <QString>
#include <QList>

class PasswordManager
{
public:
    PasswordManager();
    ~PasswordManager();

    // 初始化（数据库+密钥）
    bool init(const QString& dbPath = "password_manager.db", const QString& key = "default_key");
    // 设置加密密钥
    void setEncryptKey(const QString& key);

    // 账号管理
    bool addAccount(const AccountInfo& account); // 明文账号 -> 加密后存储
    bool editAccount(const AccountInfo& account);
    bool deleteAccount(int accountId);
    QList<AccountInfo> getAccounts(const QString& category = ""); // 加密账号 -> 解密后返回
    QStringList getCategories();

    // 数据备份与恢复（备份为加密的JSON文件）
    bool backupData(const QString& filePath);
    bool restoreData(const QString& filePath);

    // 获取Model（用于UI绑定）
    QSqlTableModel* getTableModel();

private:
    SqlRepository* m_sqlRepo; // 数据库操作实例
    QString m_encryptKey;     // 加密密钥
};

#endif // PASSWORDMANAGER_H
