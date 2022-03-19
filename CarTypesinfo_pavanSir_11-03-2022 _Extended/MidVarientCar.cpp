#include "MidVarientCar.h"

MidVarientCar::MidVarientCar()
{
    cout<<"MidVarientCar constructor"<<endl;
    m_vendor2=nullptr;
     m_vendor2=new Vendor2;
     startCollectingData();
}
void MidVarientCar::recieveTools(Display *display,AudioHardware *audiohardware)
{
    cout<<"MidVarientCar recieveToolsFunction"<<endl;
  //  m_vendor2->init();
}

void MidVarientCar::startCollectingData()
{
    cout<<"MidVarientCar startCollectingData"<<endl;
    m_vendor2->registerWithVendor(this);
    m_vendor2->collectData();
}
MidVarientCar::~MidVarientCar()
{
    cout<<"MidVarientCar destructor"<<endl;
    delete m_vendor2;
}

int MidVarientCar::getMidCarid() const
{
    return m_MidCarid;
}

void MidVarientCar::setMidCarid(int MidCarid)
{
    m_MidCarid = MidCarid;
}

string MidVarientCar::getColor() const
{
    return m_color;
}

void MidVarientCar::setColor(string color)
{
    m_color=color;
}
