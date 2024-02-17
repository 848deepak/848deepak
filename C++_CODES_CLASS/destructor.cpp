// DESTRUCTOR
#include<iostream>
using namespace std;
class parent{
    public:
    parent()
    {
        cout<<"Parent class constructor"<<endl;
    }
    ~parent(){
        cout<<"Parent class destructor"<<endl;
    }
};
int main(){
    parent s;
    return 0;
}