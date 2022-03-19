#include <iostream>

using namespace std;
//#include"Vendor1.h"
//#include"INeedTools.h"
//#include"BaseVarientCar.h"
#include"CarManager.h"
int main()
{
    cout << "Hello World!" << endl;
    //INeedTools *needTools;

   CarManager *carManager=new CarManager;    //acts as CarManager
   delete carManager;
    return 0;
}
