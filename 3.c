#include<stdio.h>



int main()
{

 int i=0,n, sum, avg, num;

 sum=0;

 printf("how many number you want\n");
 scanf("%d",&n);

 printf("Enter the numbers\n");

 do{
  scanf("%d", &num);
  sum=sum+num;
  i++;
 }

 while (i<n);

 avg=sum/n;

 printf("Sum=%d\n", sum);
 printf("Average=%d\n", avg);


}


