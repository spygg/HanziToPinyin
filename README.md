# Qt 汉字转拼音

## 用法:

- 在主工程中 include(pinyin.pri)
- 在程序中使用示例

```
    QString input("太阳当空照");

    qDebug() << Pinyin::getFullChars(input);

    //多音字,暂不支持
    qDebug() << Pinyin::getCamelChars(input).at(0);
```
