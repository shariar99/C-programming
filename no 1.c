#include<stdio.h>
int main()
{
    int y;
    printf("enter your year: ",y);
    scanf("%d",&y);

    if(((y%4==0)&&(y%100!=0))||(y%400==0))

    {

   printf("%d is leap year ",y);
 }
   else {
    printf("%d not leap year",y);
   }
   return 0;
}
