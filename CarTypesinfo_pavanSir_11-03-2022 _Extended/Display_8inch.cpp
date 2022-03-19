#include "Display_8inch.h"

Display_8inch::Display_8inch()
{
    cout<<"Display_8inch constructor"<<endl;
    init();
}

void Display_8inch::init()
{
    cout<<"Display_8inch init"<<endl;
    m_phoneFun=new PhoneFunction;
    m_media=new Media;
}


Display_8inch::~Display_8inch()
{
    cout<<"Display_8inch destructor"<<endl;
    delete m_phoneFun;
    delete m_media;
}
