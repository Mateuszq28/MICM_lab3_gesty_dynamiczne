#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T21:05:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HCI_gesture1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    videothread.cpp

HEADERS  += mainwindow.h \
    videothread.h

FORMS    += mainwindow.ui

INCLUDEPATH += D:\opencv\build\include
INCLUDEPATH += D:\opencv-build\bin
INCLUDEPATH += D:\opencv-build\lib

LIBS += D:\opencv-build\bin\libopencv_core3413.dll
LIBS += D:\opencv-build\bin\libopencv_highgui3413.dll
LIBS += D:\opencv-build\bin\libopencv_imgcodecs3413.dll
LIBS += D:\opencv-build\bin\libopencv_imgproc3413.dll
LIBS += D:\opencv-build\bin\libopencv_features2d3413.dll
LIBS += D:\opencv-build\bin\libopencv_calib3d3413.dll
LIBS += D:\opencv-build\bin\libopencv_videoio3413.dll
