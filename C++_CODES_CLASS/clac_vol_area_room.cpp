/* #include <iostream>
using namespace std;
class room
{
public:
    int lenght, breadth, height;
    int calculateVolume();
    int calculateArea();
};

int room::calculateArea()
{

    return lenght * breadth;
}

int room::calculateVolume()
{
    return lenght * breadth * height;
}
int main()
{
    room a;
    a.lenght = 10, a.breadth = 5, a.height = 2;
    a.calculateArea();
    a.calculateVolume();
    cout << "Area of room is:" << a.calculateArea() << endl;
    cout << "Volume of room is:" << a.calculateVolume() << endl;
    return 0;
} */


#include<iostream>
#include<string>
using namespace std;
class details{
    private:
    string name;
    float marks;

    public:
    string f_name;
    void samay(string n,float m);
    void sood(){
        cout<<"Name is:"<< name << endl;
        cout<<"Marks are:"<< marks << endl;
        cout<<"Father name is:"<< f_name << endl;
    }
};
void details::samay(string n,float m){
    name = n ;
    marks = m ;
}
int main(){
    details hello;
    hello.f_name="Sulabh Sood";
    hello.samay("samay",89);
    hello.sood();
    return 0;
}
