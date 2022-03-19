#include "Display_10inch.h"

Display_10inch::Display_10inch()
{
    cout<<"Display_10inch constructor"<<endl;
    init();
}
void Display_10inch::init()
{
    m_phoneFun=new PhoneFunction;
    m_media=new Media;
    m_navigation=new Navigation;
}
Display_10inch::~Display_10inch()
{
    cout<<"Display_10inch destructor"<<endl;
}
