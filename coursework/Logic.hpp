#pragma once

#include <Util.hpp>
#include <QFile>


class Logic{
public:
    static QByteArray GenerateEncodeText(int count);
};

QByteArray Logic::GenerateEncodeText(int count){
    QByteArray zen = UtilClass::GetEncodeText(UtilClass::GetPlainText(count));

    QFile mFile("MyFile.txt");
    mFile.open(QIODevice::WriteOnly);
    mFile.write(zen);
    mFile.close();


    return zen;
}

