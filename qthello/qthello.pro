TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

macx: LIBS += -L$$PWD/../../../../../../usr/local/Cellar/boost-python/1.67.0/lib/ -lboost_python27

INCLUDEPATH += $$PWD/../../../../../../usr/local/lib
DEPENDPATH += $$PWD/../../../../../../usr/local/lib

macx: PRE_TARGETDEPS += $$PWD/../../../../../../usr/local/Cellar/boost-python/1.67.0/lib/libboost_python27.a
