#-------------------------------------------------
#
# Project created by QtCreator 2014-06-18T13:10:51
#
#-------------------------------------------------

QT       += core gui
TARGET = SerComm
TEMPLATE = app


SOURCES += main.cpp\
        sercomm.cpp \
    qextserialport.cpp \
    qextserialbase.cpp \
    posix_qextserialport.cpp

HEADERS  += sercomm.h \
    qextserialport.h \
    qextserialbase.h \
    posix_qextserialport.h

FORMS    += sercomm.ui
