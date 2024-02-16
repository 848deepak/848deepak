#include<stdio.h>
#include<math.h>
int main()
{
    //int a; b=a;    not valid because int is not applied with b
    int a;
    int b=a;
    printf("the value of b is %d\n",b);

    int v=3^3;
    printf("the value of 3^3 is %d\n",pow(3,3));
    return 0;
}