#include<iostream>
using namespace std;
class students{
    private:
    float marks;
    string e_mail;
    public:
    string name;
    int age;
    void setdata(float m,string e);
    void getdata(){
        cout<<"Name of student is:"<<name<<endl;
        cout<<"Age of student is:"<<age<<endl;
        cout<<"E-mail of student is:"<<e_mail<<endl;
        cout<<"Marks of student are:"<<marks;
    }
};
void students :: setdata(float m,string e){
    marks = m;
    e_mail = e;
}
int main(){
    students A;
    A.name ="samay sood";
    A.age=18;
    A.setdata(81.2,"soodsamay55@gmail.com");
    A.getdata();
    return 0;
}