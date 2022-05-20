#pragma once
#include <QByteArray>
#include <QRandomGenerator>
#include <QCoreApplication>
#include <Encoder.h>
#include <Decoder.h>
#include <QFile>

using namespace std;
class UtilClass {
public:
    static QByteArray GetPlainText(int len);
    static QByteArray GetEncodeText(QByteArray plaintext);
    static QByteArray GetDecodeText(QByteArray encoded, QByteArray plaintext);
    static QByteArray ReadArrayFromFile (QString filePath );
    static bool WriteFile (QByteArray &text, QString &fileName );
    static QByteArray GenerateEncodeText(int len);
    static QByteArray GenerateNoiseEncodeText(QByteArray text, int countNoise);
};

