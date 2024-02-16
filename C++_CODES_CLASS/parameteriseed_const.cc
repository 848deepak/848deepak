//this is not a parameterised cont itd only for practice

#include<iostream> 
using namespace std; 
class human  
{
    public:
    human(){
    cout<<"this is human"<<endl;
    }
};
class samay: public human //child class 
{
    public:
     samay(){
        cout<<"samay is a human";
    }
};

int main(){ //main
    samay obj;//object
 
  

    return 0;
}