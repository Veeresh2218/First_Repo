#ifndef CARMANAGER_H
#define CARMANAGER_H

#include "Utils.h"
#include"BaseVarientCar.h"
#include"MidVarientCar.h"
#include"TopVarientCar.h"
#include"map"
#include<fstream>
class CarManager
{
    using VERSION_ID=int;
public:
    CarManager();
    void BaseCar();
    bool saleCar(int carno);
    void SaveCarData(int carid,string color,BaseVarientCar *obj);
    void SaveDeletedCarData(int carid,string color,BaseVarientCar *obj);
    ~CarManager();
private:
    BaseVarientCar *m_baseV;
    MidVarientCar *m_midV;
    TopVarientCar *m_topV;
    map<VERSION_ID,BaseVarientCar*> *m_carmapBase;
    map<VERSION_ID,BaseVarientCar*>::iterator it;
    map<VERSION_ID,MidVarientCar*> *m_carmapMid;
    map<VERSION_ID,MidVarientCar*>::iterator it2;
    map<VERSION_ID,TopVarientCar*> *m_carmapTop;
    map<VERSION_ID,TopVarientCar*>::iterator it3;


};

#endif // CARMANAGER_H
