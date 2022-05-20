#pragma once
#include <QByteArray>
#include <QRandomGenerator>
#include <QCoreApplication>
#include <Encoder.h>
#include <Decoder.h>
using namespace std;
class UtilClass {
public:
    static QByteArray GetPlainText(int count);
    static QByteArray GetEncodeText(QByteArray plaintext);
    static QByteArray GetDecodeText(QByteArray encoded, QByteArray plaintext);
};

QByteArray UtilClass::GetPlainText(int count){
    //std::uniform_int_distribution<unsigned int> random (0,1);
    QByteArray plaintext(count, '\0');
    for(int i = 0; i < count; i++){
        //plaintext[i] = random(*QRandomGenerator::global());
        plaintext[i] = ((QRandomGenerator::global()->generate()));

    }
    return plaintext;
}
QByteArray UtilClass::GetEncodeText(QByteArray plaintext){

    Encoder::Settings encSettings = {
        plaintext,
        Summator::DescrList()
            << (Summator::Descr() << 0 << 1)
            << (Summator::Descr() << 0 << 2),
        3
    };
    Encoder enc(encSettings);

    auto encBufferSize = enc.GetEncodedLen();
    //unsigned char *encoded = new unsigned char [encBufferSize];
    QByteArray encoded(encBufferSize, '\0');

    enc.Encode((unsigned char*)encoded.data());
    return encoded;
}

QByteArray UtilClass::GetDecodeText(QByteArray encoded, QByteArray plaintext){
    Encoder::Settings encSettings = {
        plaintext,
        Summator::DescrList()
            << (Summator::Descr() << 0 << 1)
            << (Summator::Descr() << 0 << 2),
        3
    };

    Decoder::Settings decSettings = {
        { (unsigned char*)encoded.data(), (unsigned int)encoded.size() },
        encSettings.sumDescrList,
        encSettings.regsNum
    };

    Decoder dec(decSettings);

    auto decBufferSize = dec.GetDecodedLen();
    QByteArray decoded(decBufferSize, '\0');

    dec.Decode((unsigned char*)decoded.data());
    return decoded;
}
