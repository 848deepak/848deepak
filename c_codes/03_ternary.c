#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d",& a);

    (a<=5)? printf("A is less then 5\n"): printf("A is not less then 5\n");
    (a%2==0)? printf("A is even number"): printf("A is odd number");
    return 0;
}