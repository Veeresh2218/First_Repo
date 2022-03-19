#include "Vendor3.h"

Vendor3::Vendor3()
{
    cout<<"***************Vendor3 constructor****************"<<endl;
    m_toolsReciever=nullptr;
    init();
}
void Vendor3::init()
{
    cout<<"Vendor3 init"<<endl;
    m_disp=new Display_12inch;
    for(int i=1;i<=8;i++)
    {
        m_Audio=new Speaker;
        m_list.push_back(m_Audio);
    }
    m_Audio=new Woffer;
    for(int i=1;i<=6;i++)
    {
         m_Audio=new Tweeters;
          m_list.push_back(m_Audio);
    }

}
bool Vendor3::registerWithVendor(INeedTools *tencar)
{
    cout<<"Vendor3 registerWithVendorfunction"<<endl;
    m_toolsReciever=tencar;
    return true;
}
bool Vendor3::collectData()
{
    cout<<"Vendor3 startCollecting Function"<<endl;
    it=m_list.begin();
    while(it!=m_list.end())
      {
        m_toolsReciever->recieveTools(m_disp,m_Audio);
        it++;
    }
    return true;
}
Vendor3::~Vendor3()
{
    cout<<"Vendor3 destructor"<<endl;
    delete m_disp;
    it=m_list.begin();
    while(it!=m_list.end())
    {
        delete (*it);
        it++;
    }
    m_list.clear();

}
