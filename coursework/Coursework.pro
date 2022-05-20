TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
QT += core

SOURCES += \
    Bit.cpp \
    CoderHelper.cpp \
    Decoder.cpp \
    Encoder.cpp \
    Register.cpp \
    RegisterSet.cpp \
    Summator.cpp \
    main.cpp

HEADERS += \
    Bit.h \
    CoderHelper.h \
    Decoder.h \
    Encoder.h \
    List.hpp \
    Node.hpp \
    Register.h \
    RegisterSet.h \
    Summator.h \
    Util.hpp \
    Logic.hpp
