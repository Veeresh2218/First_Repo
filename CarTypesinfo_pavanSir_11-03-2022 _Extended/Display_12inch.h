#ifndef DISPLAY_12INCH_H
#define DISPLAY_12INCH_H

#include"Utils.h"
#include"PhoneFunction.h"
#include"Navigation.h"
#include"Media.h"
#include"ClimateControl.h"
#include"VehicleInfo.h"
#include"Display.h"
class Display_12inch:public Display
{
public:
    Display_12inch();
    ~Display_12inch();
private:
    PhoneFunction *m_phoneFun;
    Navigation *m_navigation;
    Media *m_media;
    ClimateControl *m_climate;
    VehicleInfo *m_vehicle;
};

#endif // DISPLAY_12INCH_H
