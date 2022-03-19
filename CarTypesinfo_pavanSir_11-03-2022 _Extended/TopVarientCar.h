#ifndef TOPVARIENTCAR_H
#define TOPVARIENTCAR_H

#include"Utils.h"
#include"INeedTools.h"
#include"Vendor3.h"
class TopVarientCar:public INeedTools
{
public:
    TopVarientCar();
    void recieveTools(Display *display,AudioHardware *audiohardware);
    void startCollectingData();
    ~TopVarientCar();
    int getTopCarid() const;
    void setTopCarid(int TopCarid);

    string getColor()const;
    void setColor(const string color);

private:
    Vendor3 *m_vendor3;
    int m_TopCarid;
    string m_color;
};

#endif // TOPVARIENTCAR_H
