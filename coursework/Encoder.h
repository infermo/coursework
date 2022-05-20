#pragma once

#include <RegisterSet.h>
#include <Summator.h>

class Encoder {
public:

    struct Settings {
        QByteArray inputText;
        Summator::DescrList sumDescrList;
        unsigned int regsNum;
    };

    Encoder(const Settings &settings);

    unsigned int GetEncodedLen();
    void Encode(unsigned char *out);

private:
    Settings _settings;
};
