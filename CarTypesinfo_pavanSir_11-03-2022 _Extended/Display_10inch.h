#ifndef DISPLAY_10INCH_H
#define DISPLAY_10INCH_H

#include"Utils.h"
#include"PhoneFunction.h"
#include"Navigation.h"
#include"Media.h"
#include"Display.h"
class Display_10inch:public Display
{
public:
    Display_10inch();
    void init();
    ~Display_10inch();
private:
    PhoneFunction *m_phoneFun;
    Navigation *m_navigation;
    Media *m_media;
};

#endif // DISPLAY_10INCH_H
