#include <UtilClass.h>
#include <mainwindow.h>


QByteArray UtilClass::GetPlainText(int len){
    //std::uniform_int_distribution<unsigned int> random (0,1);
    QByteArray plaintext(len, '\0');
    for(int i = 0; i < len; i++){
        //plaintext[i] = random(*QRandomGenerator::global());
        plaintext[i] = QRandomGenerator::global()->bounded(0,256);

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

QByteArray UtilClass::ReadArrayFromFile(QString fileName){ //readFile
    QFile mFile(fileName);
    if (!mFile.open(QIODevice::ReadOnly))
        return QByteArray();
    QByteArray text = mFile.readAll();
    mFile.close();
    return text;
}

bool UtilClass::WriteFile(QByteArray &text, QString &fileName){
    QFile mFile(fileName);
    if (!mFile.open(QIODevice::WriteOnly))
           return false;
    mFile.write(text);
    mFile.close();
    return true;
}

QByteArray UtilClass::GenerateEncodeText(int len){
    QByteArray text = UtilClass::GetEncodeText(UtilClass::GetPlainText(len));
    return text;
}

QByteArray UtilClass::GenerateNoiseEncodeText(QByteArray text, int countNoise){
    for (int i = 0; i < countNoise; i++){
        unsigned int randomIndex = QRandomGenerator::global()->bounded(0,text.size() - 1);
        unsigned int randomBit = QRandomGenerator::global()->bounded(0,7);
        unsigned int mask = (1 << randomBit);
        text[randomIndex] = text[randomIndex] ^ mask;
    }
    return text;
}


