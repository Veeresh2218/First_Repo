#ifndef RADIO_H
#define RADIO_H

#include"Utils.h"
#include"AudioHardware.h"
class Radio:public AudioHardware
{
public:
    Radio();
    ~Radio();
};

#endif // RADIO_H
