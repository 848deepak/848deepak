#include<stdio.h>
int main()
{
    float physics, chemistry ,maths;
    float total;
    printf("Enter marks of physics \n");
    scanf("%f",& physics);
    printf("Enter marks of chemistry \n");
    scanf("%f",& chemistry);
    printf("Enter marks of maths \n");
    scanf("%f",& maths);
    total=(physics + chemistry + maths)/3;
    if((total<40) || physics<33 ||chemistry<33 ||maths<33){
        printf("Your total percentage is %f,and you are fail \n",total);
    }
    else{
    printf("Your total percentage is %f,and you are pass \n",total);
    }
    return 0;
}