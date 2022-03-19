#include "TopVarientCar.h"

TopVarientCar::TopVarientCar()
{
    cout<<"TopVarientCar constructor"<<endl;
    m_vendor3=nullptr;
    m_vendor3=new Vendor3;
    startCollectingData();

}
void TopVarientCar::recieveTools(Display *display,AudioHardware *audiohardware)
{
    cout<<"TopVarientCar recieveToolsFunction"<<endl;
   // m_vendor3->init();
}

void TopVarientCar::startCollectingData()
{
    cout<<"TopVarientCar startCollectingData"<<endl;
    m_vendor3->registerWithVendor(this);
    m_vendor3->collectData();
}
TopVarientCar::~TopVarientCar()
{
    cout<<"TopVarientCar destructor"<<endl;
    delete m_vendor3;
}

int TopVarientCar::getTopCarid() const
{
    return m_TopCarid;
}

void TopVarientCar::setTopCarid(int TopCarid)
{
    m_TopCarid = TopCarid;
}

string TopVarientCar::getColor() const
{
    return m_color;
}

void TopVarientCar::setColor(const string color)
{
    m_color=color;
}
