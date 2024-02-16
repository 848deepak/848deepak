#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Multiplication table is %d \n",n);
    for(int i=1 ; i<=20 ; i++){
    printf("%d * %d = %d \n",n,i,n*i);
    }
    return 0;
}