#include<iostream>
using namespace std;
class shape
{
    public:
    void setWidth(int w)
    {
        Width = w;
    }
    void setHeight(int h)
    {
        Height = h;
    }
    protected:
    int Width;
    int Height;


};
class rectangle:public shape
{
    public:
    int getarea()
    {
        return(Width*Height);
    }
};
class triangle:public shape
{
    public:
    int getarea()
    {
        return(Width*Height/2);
    }
};
int main()
{
    rectangle rect;
    triangle tri;
    rect.setWidth(5);
    rect.setHeight(9);

    tri.setHeight(6);
    tri.setWidth(9);
    cout<<"area or triangle:"<<tri.getarea()<<endl<<"area of rectangle:"<<rect.getarea()<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
class Shape{  // Base class
public:
void setWidth(int w)
{
    Width = w;
}
void setHeight(int h)
{
    Height = h;
}
protected:
int Width;
int Height;
};
class rectangle : public Shape{  // Derieved class
    public:
    int getArea(){
        return(Width * Height);
    }
};
class Triangle: public Shape{
    public:
    int getArea()
    {
        return (Width*Height/2);
    }
};
int main(){
    rectangle rect;
    Triangle tri;
    rect.setWidth(10);
    rect.setHeight(10);
    tri.setWidth(5);
    tri.setHeight(10);
    cout<<"Area of rectangle is : "<<rect.getArea()<<endl;
    cout<<"Area of triangle is : "<<tri.getArea();
    return 0;
}*/