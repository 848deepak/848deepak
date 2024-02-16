//#include<stdio.h>
//int main()
//{
  //  int rating;
    //printf("Enter your rating (1-5) \n");
   // scanf("%d",& rating);
   // switch(rating){
   // case 1:
   // printf("Your rating is 1\n");
   // break;
    //case 2:
  //  printf("Your rating is 2\n");
 //   break;
    //case 3:
   // printf("Your rating is 3\n");
   // break;
  //  case 4:
  //  printf("Your rating is 4\n");
    //break;
   // case 5:
  //  printf("Your rating is 5\n");
 //   break;
//    default :
 //   printf("invalid rating\n");
    //break;
   // }
  //  return 0;
//}
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: \n");
    scanf("%d",& marks);
    switch (marks/10)
    {
    case 10:
    case 9:
    printf("A grade\n");
    break;
    case 8:
    case 7:
    printf("B grade\n");
    break;
    default:
    printf("fail\n");
    break;
}
return 0;
}