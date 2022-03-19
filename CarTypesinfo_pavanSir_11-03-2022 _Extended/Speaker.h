#ifndef SPEAKER_H
#define SPEAKER_H

#include"Utils.h"
#include"AudioHardware.h"
class Speaker:public AudioHardware
{
public:
    Speaker();
    ~Speaker();
};

#endif // SPEAKER_H
