#ifndef VENDOR2_H
#define VENDOR2_H

#include"Utils.h"
#include"Display.h"
#include"AudioHardware.h"
#include"Display_10inch.h"
#include"Speaker.h"
#include"Tweeters.h"
#include"Woffer.h"
#include"INeedTools.h"
#include"list"
class Vendor2
{
public:
    Vendor2();
    void init();
    bool registerWithVendor(INeedTools *tencar);
    bool collectData();
    ~Vendor2();
private:
    Display *m_disp;
    AudioHardware *m_Audio;
    list<AudioHardware*> m_list;
    list<AudioHardware*>::iterator it;
    INeedTools *m_toolsReciever;
};

#endif // VENDOR2_H
