#include<stdio.h>
int main()
{
    // 97-122 = a-z(lower case) and 65-89 = A-Z(upper case)
    char a;
    printf("Enter the character\n");
    scanf("%c",&a);

    if(a<=122 && a>=97){
    printf("It is lower case \n");
    }
    else{
    printf("It is not lower case \n");
    }
    return 0;
}