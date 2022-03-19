#ifndef BASEVARIENTCAR_H
#define BASEVARIENTCAR_H
#include"Utils.h"
#include"INeedTools.h"
#include"Vendor1.h"
#include"AudioHardware.h"
#include"Display.h"
class BaseVarientCar:public INeedTools
{
public:
    BaseVarientCar();
     void recieveTools(Display *display,AudioHardware *audiohardware);
     void startCollectingData();

     int getBaseId()const;
     void setBaseId(const int baseid);

     string getColor()const;
     void setColor(const string color);


    ~BaseVarientCar();
private:
     Vendor1 *m_vendor1;
     int m_baseCarid;
     string m_color;
};

#endif // BASEVARIENTCAR_H
