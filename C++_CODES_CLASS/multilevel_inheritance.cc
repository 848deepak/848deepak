#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"This is vehicle"<<endl;
    }
};
class fourwheeler : public vehicle{
    public:
    fourwheeler()
    {
        cout<<"object with 4 wheel";
    }

};
class car: public fourwheeler{
    public:
    car()
    {
        cout<<"";
    }
};

int main(){
    car obj;
    return 0;
}