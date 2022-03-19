#include "Vendor1.h"

Vendor1::Vendor1()
{
    cout<<"*************Vendor1 constructor******************"<<endl;
    m_toolsReciever=nullptr;
    init();
}

void Vendor1::init()
{
    cout<<"Vendor1 init"<<endl;
    m_disp=new Display_8inch;
   // m_list=new list<AudioHardware>;
    for(int i=1;i<=4;i++)
    {
        m_Audio=new Speaker;
        m_list.push_back(m_Audio);
    }
    for(int i=5;i<=6;i++)
    {
        m_Audio=new Tweeters;
        m_list.push_back(m_Audio);
    }
    cout<<"-------------------------------"<<endl;
}

bool Vendor1::registerWithVendor(INeedTools *Eightcar)
{
    cout<<"Vendor1 registerWithVendorfunction"<<endl;
    m_toolsReciever=Eightcar;
    return true;
}

bool Vendor1::collectData()
{
    cout<<"Vendor1 startCollecting Function"<<endl;
    it=m_list.begin();
    while(it!=m_list.end())
      {
        m_toolsReciever->recieveTools(m_disp,m_Audio);
        it++;
    }
    return true;
}
Vendor1::~Vendor1()
{
     cout<<"Vendor1 destructor"<<endl;
     delete m_disp;
 //    list<AudioHardware*>::iterator it;

    it=m_list.begin();
    while(it!=m_list.end())
    {
        delete (*it);
        it++;
    }
    m_list.clear();

}
