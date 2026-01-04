#ifndef ENCRYPTIONUTIL_H
#define ENCRYPTIONUTIL_H

#include <QByteArray>
#include <QString>

class EncryptionUtil
{
public:
    // 加密：明文 -> Base64编码的加密字符串
    static QString encrypt(const QString& plainText, const QString& key);
    // 解密：Base64编码的加密字符串 -> 明文
    static QString decrypt(const QString& cipherText, const QString& key);

private:
    // 辅助函数：补齐密钥长度（AES-256 需要32字节密钥）
    static QByteArray fixKey(const QString& key);
    // 辅助函数：PKCS7 填充（块加密算法需要数据长度为块大小的整数倍）
    static QByteArray pkcs7Padding(const QByteArray& data, int blockSize);
    // 辅助函数：去除 PKCS7 填充
    static QByteArray pkcs7Unpadding(const QByteArray& data);
};

#endif // ENCRYPTIONUTIL_H
