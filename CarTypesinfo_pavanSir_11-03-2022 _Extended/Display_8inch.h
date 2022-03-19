#ifndef DISPLAY_8INCH_H
#define DISPLAY_8INCH_H
#include"Utils.h"
#include"PhoneFunction.h"
#include"Media.h"
#include"Display.h"
class Display_8inch:public Display
{
public:
    Display_8inch();
    void init();

    ~Display_8inch();
private:
    PhoneFunction *m_phoneFun;
    Media *m_media;
};

#endif // DISPLAY_8INCH_H
