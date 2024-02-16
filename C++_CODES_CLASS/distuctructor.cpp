/*#include<iostream>
using namespace std;
class parent
{
    public:
    parent()
    {
        cout<<"parent constructor called"<<endl;

    }

    ~parent()
    {
    cout<<"parent distrustor called"<<endl;
    }
};
int main()
{
parent a;
//a.parent;
return 0;
}*/
#include<iostream>
using namespace std;
class child
{
    public:
    child()
    {
        cout<<"child constructor called"<<endl;

    }

    ~child()
    {
    cout<<"child distrustor called"<<endl;
    }
};
int main()
{
child a;

return 0;
}