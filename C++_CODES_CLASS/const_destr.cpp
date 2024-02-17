#include<iostream>
using namespace std;
class detail{
    public:
    detail()
    {
        cout<<"Samay"<<endl;
    }
    ~detail(){
        cout<<"sood"<<endl;
    }
};
int main(){
    detail s;
    return 0;
}