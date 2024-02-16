/*#include<istream>
using namespace std;
class Parent
{
     int id_p;
    public:
    Parent()
    //int id_p;
};
class child: public Parent{
    int id_c;
};
int main(){
    child obj;
    obj.id_p =7;
    obj.id_c =69;
 return 0;
}*/
#include<iostream>
using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"This is A Parent Class ";
    }
};

class Child:public Parent
{
    
};

int main()
{
    Child obj;
    
    return 0;
}