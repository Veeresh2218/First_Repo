#ifndef VENDOR3_H
#define VENDOR3_H

#include"Utils.h"
#include"Display.h"
#include"AudioHardware.h"
#include"Display_12inch.h"
#include"Speaker.h"
#include"Tweeters.h"
#include"Woffer.h"
#include"INeedTools.h"
#include"list"
class Vendor3
{
public:
    Vendor3();
    void init();
    bool registerWithVendor(INeedTools *tencar);
    bool collectData();
    ~Vendor3();
private:
    Display *m_disp;
    AudioHardware *m_Audio;
    list<AudioHardware*> m_list;
    list<AudioHardware*>::iterator it;
    INeedTools *m_toolsReciever;
};

#endif // VENDOR3_H
