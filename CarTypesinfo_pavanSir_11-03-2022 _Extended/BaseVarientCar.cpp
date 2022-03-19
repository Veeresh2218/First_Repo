#include "BaseVarientCar.h"

BaseVarientCar::BaseVarientCar()
{
    cout<<"BaseVarientCar constructor"<<endl;
    m_vendor1=nullptr;
    m_vendor1=new Vendor1;
    startCollectingData();

}
void BaseVarientCar::recieveTools(Display *display,AudioHardware *audiohardware)
{
    cout<<"BaseVarientCar recieveToolsFunction"<<endl;
//    m_vendor1->init();
}

void BaseVarientCar::startCollectingData()
{
    cout<<"BaseVarientCar startCollectingData"<<endl;
    m_vendor1->registerWithVendor(this);
    m_vendor1->collectData();
}

int BaseVarientCar::getBaseId() const
{
    return m_baseCarid;
}

void BaseVarientCar::setBaseId(const int baseid)
{
    m_baseCarid=baseid;
}

string BaseVarientCar::getColor() const
{
    return m_color;
}

void BaseVarientCar::setColor(const string color)
{
    m_color=color;
}
BaseVarientCar::~BaseVarientCar()
{
    cout<<"BaseVarientCar destructor"<<endl;
    delete m_vendor1;
}
