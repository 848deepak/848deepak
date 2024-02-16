
#include<iostream>
using namespace std;

class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"This Is A Vehicle"<<endl;
    }
};
class FourWheeler
{
    public:
    FourWheeler()
    {
        cout<<"This Is a Four Wheeler"<<endl;
    }
};

class Car:public Vehicle,public FourWheeler
{
    
};
int main()
{
  Car obj;

  return 0;
}