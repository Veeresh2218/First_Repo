#ifndef VENDOR1_H
#define VENDOR1_H

#include"Utils.h"
#include"Display.h"
#include"AudioHardware.h"
#include"Display_8inch.h"
#include"Speaker.h"
#include"Tweeters.h"
#include"INeedTools.h"
#include"list"

class Vendor1
{
public:
    Vendor1();
    void init();
    bool registerWithVendor(INeedTools *Eightcar);
    bool collectData();
    ~Vendor1();

private:
    Display *m_disp;
    AudioHardware *m_Audio;
    list<AudioHardware*> m_list;
    list<AudioHardware*>::iterator it;
    INeedTools *m_toolsReciever;
};

#endif // VENDOR1_H
