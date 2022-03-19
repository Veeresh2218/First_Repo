#include "Vendor2.h"

Vendor2::Vendor2()
{
    cout<<"**********Vendor2 constructor*****************"<<endl;
    m_toolsReciever=nullptr;
    init();
}
void Vendor2::init()
{
    cout<<"Vendor2 init"<<endl;
    m_disp=new Display_10inch;
    for(int i=1;i<=6;i++)
    {
        m_Audio=new Speaker;
        m_list.push_back(m_Audio);
    }
    m_Audio=new Woffer;
    for(int i=1;i<=4;i++)
    {
         m_Audio=new Tweeters;
        m_list.push_back(m_Audio);
    }

}
bool Vendor2::registerWithVendor(INeedTools *tencar)
{
    cout<<"Vendor2 registerWithVendorfunction"<<endl;
    m_toolsReciever=tencar;
    return true;
}
bool Vendor2::collectData()
{
    cout<<"Vendor2 startCollecting Function"<<endl;
    it=m_list.begin();
    while(it!=m_list.end())
      {
        m_toolsReciever->recieveTools(m_disp,m_Audio);
        it++;
    }
    return true;
}
Vendor2::~Vendor2()
{
    cout<<"Vendor2 destructor"<<endl;
    delete m_disp;
    it=m_list.begin();
    while(it!=m_list.end())
    {
        delete (*it);
        it++;
    }
    m_list.clear();
}
