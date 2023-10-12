QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    centerwidget.cpp \
    fileview.cpp \
    findfile.cpp \
    main.cpp \
    mainwindow.cpp \
    navigator.cpp \
    toolbar.cpp

HEADERS += \
    centerwidget.h \
    fileview.h \
    findfile.h \
    mainwindow.h \
    navigator.h \
    toolbar.h

FORMS += \
    centerwidget.ui \
    fileview.ui \
    findfile.ui \
    mainwindow.ui \
    navigator.ui \
    toolbar.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    file.qrc
