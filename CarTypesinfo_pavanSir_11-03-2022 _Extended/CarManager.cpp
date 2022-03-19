#include "CarManager.h"

CarManager::CarManager()
{
    cout<<"CarManager constructor"<<endl;
    m_baseV=nullptr;
    m_midV=nullptr;
    m_topV=nullptr;
    m_carmapBase=nullptr;
    m_carmapMid=nullptr;
    m_carmapTop=nullptr;
    BaseCar();
}

void CarManager::BaseCar()
{
    cout<<"CarMAnager BaseCar function"<<endl;
    enum carVersion
    {
        BASE=1,
        MID,
        TOP,
        EXIT
    };
    //startAgain:
    while (1) {

        int versionChoice;
        cout<<"Which Version car to be created"<<endl;
        cout<<"1 . BaseVarient Car"<<endl;
        cout<<"2 . MidVarient Car"<<endl;
        cout<<"3 . TopVarient Car"<<endl;
        cout<<"4 . EXIT"<<endl;
        cin>>versionChoice;

        switch(versionChoice)
        {
        case BASE:
        {
            m_carmapBase=new map<VERSION_ID,BaseVarientCar*>;
            int count=0;
            cout<<"Enter The Number of Base Car"<<endl;
            cin>>count;

            for(int i=1;i<=count;i++)
            {
                string color;
                cout<<"color of car"<<endl;
                cin>>color;
                m_baseV=new BaseVarientCar;
                m_baseV->setBaseId(i);
                cout<<"BaseCar ChessiId ="<<m_baseV->getBaseId()<<endl;
                m_baseV->setColor(color);
                cout<<"BaseCar color ="<<m_baseV->getColor()<<endl;
                m_carmapBase->insert({m_baseV->getBaseId(),m_baseV});
                 SaveCarData(m_baseV->getBaseId(),m_baseV->getColor(),m_baseV);
            }

            cout<<"size of map is ="<<m_carmapBase->size()<<endl;


            it=m_carmapBase->begin();
            while(it!=m_carmapBase->end())
            {
                cout<<(*it).first<<endl;
                it++;
            }
            int selectcarid;
            cout<<"user select the carid that he want to buy"<<endl;
            cin>>selectcarid;
            bool sold=this->saleCar(selectcarid);
            if(sold==true)
            {
                cout<<"the car is sold"<<endl;
            }
            else
            {
                cout<<"No car is Not available with the id you reffered"<<endl;
            }
            it=m_carmapBase->begin();
            while(it!=m_carmapBase->end())
            {
                cout<<(*it).first<<endl;
                it++;
            }

            break;
        }
        case MID:
        {
            m_carmapMid=new map<VERSION_ID,MidVarientCar*>;
            int count=0;
            cout<<"Enter The Number of Mid Car"<<endl;
            cin>>count;
            for(int i=1;i<=count;i++)
            {
                string color;
                cout<<"color of car"<<endl;
                cin>>color;
                m_midV=new MidVarientCar;
                m_midV->setMidCarid(i*10);
                cout<<"MidCar ChessiId ="<<m_midV->getMidCarid()<<endl;
                m_midV->setColor(color);
                cout<<"MidCar color ="<<m_midV->getColor()<<endl;
                //        m_carmap->insert({m_midV->getMidCarid(),m_midV});
                m_carmapMid->insert({m_midV->getMidCarid(),m_midV});
            }
            it2=m_carmapMid->begin();
            while(it2!=m_carmapMid->end())
            {
                cout<<(*it2).first<<endl;
                it2++;
            }
            //            int selectcarid;
            //            cout<<"user select the carid that he want to buy"<<endl;
            //            cin>>selectcarid;
            //            bool sold=this->saleCar(selectcarid);
            //            if(sold==true)
            //            {
            //                cout<<"the car is sold"<<endl;
            //            }
            //            else
            //            {
            //                cout<<"No car is Not available with the id you reffered"<<endl;
            //            }
            break;
        }
        case TOP:
        {
            m_carmapTop=new map<VERSION_ID,TopVarientCar*>;
            int count=0;
            cout<<"Enter The Number of Top Car"<<endl;
            cin>>count;
            for(int i=1;i<=count;i++)
            {
                string color;
                cout<<"color of car"<<endl;
                cin>>color;

                m_topV=new TopVarientCar;
                m_topV->setTopCarid(i*100);
                cout<<"TopCar ChessiId"<<m_topV->getTopCarid()<<endl;
                m_topV->setColor(color);
                cout<<"MidCar color ="<<m_topV->getColor()<<endl;
                m_carmapTop->insert({m_topV->getTopCarid(),m_topV});
            }

            it3=m_carmapTop->begin();
            while(it3!=m_carmapTop->end())
            {
                cout<<(*it3).first<<endl;
                it3++;
            }
            int selectcarid;
            cout<<"user select the carid that he want to buy"<<endl;
            cin>>selectcarid;
            bool sold=this->saleCar(selectcarid);
            if(sold==true)
            {
                cout<<"the car is sold"<<endl;
            }
            else
            {
                cout<<"No car is Not available with the id you reffered"<<endl;
            }
            break;
        }
        case EXIT:
        {
            cout<<"No other versions found"<<endl;
            return;
            break;
        }
        }
    }

}

bool CarManager::saleCar(int carno)
{
    cout<<"carManager saleCar function"<<endl;
    if(m_carmapBase!=nullptr)
    {
        it=m_carmapBase->find(carno);
//        if(it!=m_carmapBase->end())
//        {
            pair<VERSION_ID,BaseVarientCar*> m_pair10=(*it);
            SaveDeletedCarData(m_pair10.second->getBaseId(),m_pair10.second->getColor(),m_pair10.second);
            delete m_pair10.second;
            m_carmapBase->erase(it);
            return true;
     //   }
     //   return false;
    }
    if(m_carmapMid!=nullptr)
    {
        it2=m_carmapMid->find(carno);
        {
            delete(*it2).second;
            return true;
        }
        return false;
    }
    if(m_carmapTop!=nullptr)
    {
        it3=m_carmapTop->find(carno);
        {
            delete(*it3).second;
            return true;
        }
        return false;
    }
}

void CarManager::SaveCarData(int carid,string color,BaseVarientCar *obj)
{
    cout<<"SaveCarData Called"<<endl;
    fstream file("./veeresh.csv",ios::out | ios::app);
    if(!file)
    {
        cout<<"file not created"<<endl;
    }
    else
    {
        cout<<"file created"<<endl;
    }
    file<<carid<<",";
    file<<color<<",";
    file<<obj<<endl;
    file.close();
    cout<<"saved data"<<endl;
}

void CarManager::SaveDeletedCarData(int carid, string color, BaseVarientCar *obj)
{
    cout<<"SaveDeletedCarData Called"<<endl;
    fstream file("./DeletedCar.csv",ios::out | ios::app);
    if(!file)
    {
        cout<<"file not created"<<endl;
    }
    else
    {
        cout<<"file created"<<endl;
    }
    file<<carid<<",";
    file<<color<<",";
    file<<obj<<endl;
    file.close();
    cout<<"saved data"<<endl;
}
CarManager::~CarManager()
{
    cout<<"CarManager destructor"<<endl;
    cout<<"veresh #### destructor"<<m_carmapBase->size()<<endl;

    if(m_carmapBase!=nullptr)
    {
        it=m_carmapBase->begin();
        while(it!=m_carmapBase->end())
        {
            cout<<"********destructor calling *******"<<endl;
            pair<VERSION_ID,BaseVarientCar*> m_pair=(*it);
            delete m_pair.second;
            m_carmapBase->erase(it);
            it++;
        }
    }
    if(m_carmapMid !=nullptr){

        it2=m_carmapMid->begin();
        while(it2!=m_carmapMid->end())
        {
            cout<<"destructor calling2"<<endl;
            pair<VERSION_ID,MidVarientCar*> m_pair2=(*it2);
            cout<<"destructor calling3"<<endl;
            delete m_pair2.second;
            it2++;
        }
    }
    if(m_carmapTop!=nullptr)
    {
        it3=m_carmapTop->begin();
        while(it3!=m_carmapTop->end())
        {
            pair<VERSION_ID,TopVarientCar*> m_pair3=(*it3);
            delete m_pair3.second;
        }
    }
}
