#ifndef INEEDTOOLS_H
#define INEEDTOOLS_H

#include"Utils.h"
#include"AudioHardware.h"
#include"Display.h"
class INeedTools
{
public:
    INeedTools();
    virtual void recieveTools(Display *display,AudioHardware *audiohardware);
    virtual ~INeedTools();
};

#endif // INEEDTOOLS_H
