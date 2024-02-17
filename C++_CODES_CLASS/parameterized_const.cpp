#include<iostream>
using namespace std;
class constructor{
    int x,y;
    public:
    constructor(int a,int b){
        x = a;
        y = b;
    }
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    constructor A(10,3);
    A.display();
    return 0;
}