#ifndef PINYIN_H
#define PINYIN_H

#include <QJsonDocument>
#include <QVariant>
#include <QMap>
#include <QObject>

class Pinyin : public QObject
{
    Q_OBJECT

public:
    explicit Pinyin(bool polyPhone = false, QObject *parent = 0);

public:
    static QString getFullChars(QString input);
    static QStringList getCamelChars(QString str);
    static void setPolyPhone(bool polyPhone);
    static bool polyPhone();

private:
    static QMap <QString, QVariant> m_fullDict;
    static QMap <QString, QVariant> m_polyphone;
    static bool m_checkPolyphone;
    static QString m_charDict;

private:
    static QString getFullChar(QString str);
    static QString capitalize(QString str);
    static QString getChar(QChar ch);
    static QStringList getResult(QStringList chars);
};

#endif // PINYIN_H
