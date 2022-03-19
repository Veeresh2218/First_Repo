#ifndef MIDVARIENTCAR_H
#define MIDVARIENTCAR_H

#include"Utils.h"
#include"INeedTools.h"
#include"Vendor2.h"
class MidVarientCar:public INeedTools
{
public:
    MidVarientCar();
    void recieveTools(Display *display,AudioHardware *audiohardware);
    void startCollectingData();
    ~MidVarientCar();
    int getMidCarid() const;
    void setMidCarid(int MidCarid);

    string getColor()const;
    void setColor(string color);

private:
    Vendor2 *m_vendor2;
    int m_MidCarid;
    string m_color;
};

#endif // MIDVARIENTCAR_H
