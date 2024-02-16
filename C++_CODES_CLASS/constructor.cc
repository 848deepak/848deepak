#include<iostream>  
using namespace std;
class construct
{
    public: 
    int a,b;

construct()
{
    a=10;
    b=20;

}
};
int main(){
    construct c;
    cout<<c.a<<endl<<c.b;
    //cout<<c.b<<endl;
} 