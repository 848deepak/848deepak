#include<stdio.h>
void display();   //function prototype

int main()
{
    int a;
    printf("Initialising display function \n");
    display();  //function call
    printf("Display function finished it's work \n");
    return 0;
}
 // Function defination
    void display(){
    printf("This is display \n ");
    }