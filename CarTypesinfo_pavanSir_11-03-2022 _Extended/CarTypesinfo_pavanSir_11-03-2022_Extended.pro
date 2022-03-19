TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        AudioHardware.cpp \
        BaseVarientCar.cpp \
        CarManager.cpp \
        ClimateControl.cpp \
        Display.cpp \
        Display_10inch.cpp \
        Display_12inch.cpp \
        Display_8inch.cpp \
        INeedTools.cpp \
        Media.cpp \
        MidVarientCar.cpp \
        Navigation.cpp \
        PhoneFunction.cpp \
        Radio.cpp \
        Speaker.cpp \
        TopVarientCar.cpp \
        Tweeters.cpp \
        VehicleInfo.cpp \
        Vendor1.cpp \
        Vendor2.cpp \
        Vendor3.cpp \
        Woffer.cpp \
        main.cpp

DESTDIR = $$PWD/bins
HEADERS += \
    AudioHardware.h \
    BaseVarientCar.h \
    CarManager.h \
    ClimateControl.h \
    Display.h \
    Display_10inch.h \
    Display_12inch.h \
    Display_8inch.h \
    INeedTools.h \
    Media.h \
    MidVarientCar.h \
    Navigation.h \
    PhoneFunction.h \
    Radio.h \
    Speaker.h \
    TopVarientCar.h \
    Tweeters.h \
    Utils.h \
    VehicleInfo.h \
    Vendor1.h \
    Vendor2.h \
    Vendor3.h \
    Woffer.h
