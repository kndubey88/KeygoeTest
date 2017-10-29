#-------------------------------------------------
#
# Project created by QtCreator 2017-10-14T13:47:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KeygoeAutoTest
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
DEFINES -= UNICODE
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    keygoe_auto_test_sub.cpp \
    variables.cpp \
    C:/DJKeygoe/Samples/Analog_Common_Code/Analog_Common_Code.cpp \
    C:/DJKeygoe/Samples/CAS_Common_Code/CAS_Common_Cfg.CPP

HEADERS += \
        mainwindow.h \
    C:/DJKeygoe/Inc/DJAcsAPIDef.h \
    C:/DJKeygoe/Inc/DJAcsCmdDef.h \
    C:/DJKeygoe/Inc/DJAcsDataDef.h \
    C:/DJKeygoe/Inc/DJAcsDevState.h \
    C:/DJKeygoe/Inc/DJAcsE1API.h \
    C:/DJKeygoe/Inc/DJAcsISUPDef.h \
    C:/DJKeygoe/Inc/DJAcsSignalMonitor.h \
    C:/DJKeygoe/Inc/DJAcsTUPDef.h \
    C:/DJKeygoe/Inc/DJAcsUserDef.h \
    C:/DJKeygoe/Inc/DJMissCall.h \
    C:/DJKeygoe/Inc/ITPCom.h \
    C:/DJKeygoe/Inc/ITPComErrorCode.h \
    C:/DJKeygoe/Inc/ITPDataDefine.h \
    C:/DJKeygoe/Inc/ItpFlowChanDef.h \
    C:/DJKeygoe/Inc/ITPGUID.h \
    C:/DJKeygoe/Inc/ITPISDN.h \
    C:/DJKeygoe/Inc/ITPMainModCallBack.h \
    C:/DJKeygoe/Inc/ITPMsgPublic.h \
    C:/DJKeygoe/Inc/PutTextInPicture.h \
    keygoe_auto_test_sub.h \
    C:/DJKeygoe/Samples/Analog_Common_Code/Analog_Common_Code.h \
    C:/DJKeygoe/Samples/CAS_Common_Code/CAS_Common_Cfg.H

FORMS += \
        mainwindow.ui



DISTFILES += \
    C:/DJKeygoe/Samples/C++/Analog_Common_Code/XMS_Analog_Cfg.INI \
    C:/DJKeygoe/Samples/C++/CAS_Common_Code/XMS_CAS_Cfg.INI \
    images/pause.png \
    images/start.png \
    ../build-KeygoeAutoTest-Desktop_Qt_5_9_1_MinGW_32bit-Debug/cfg_file.ini \

RESOURCES += \
    images.qrc


#win32:INCLUDEPATH += "C:/DJKeygoe/Inc"

#win32:LIBS += "-LC:/DJKeygoe/Lib" -lDJAcsAPI



#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../DJKeygoe/Lib/ -lDJAcsAPI
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../DJKeygoe/Lib/ -lDJAcsAPI

#INCLUDEPATH += $$PWD/../../../../../DJKeygoe/Lib
#DEPENDPATH += $$PWD/../../../../../DJKeygoe/Lib

#win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../DJKeygoe/Lib/DJAcsAPI.lib
#else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../DJKeygoe/Lib/DJAcsAPI.lib



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../DJKeygoe/Lib64/ -lDJAcsAPI
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../DJKeygoe/Lib64/ -lDJAcsAPI

INCLUDEPATH += $$PWD/../../../../../DJKeygoe/Lib64
DEPENDPATH += $$PWD/../../../../../DJKeygoe/Lib64

win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../DJKeygoe/Lib64/DJAcsAPI.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../DJKeygoe/Lib64/DJAcsAPI.lib
