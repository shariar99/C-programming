#include<stdio.h>
#include<math.h>
main()
{
    float x, y, z;
 printf("enter the value of x");
 scanf("%f",&x);
 z=(x-1/x);
 y=z+((z*z)/2)+((z*z*z)/3)+((z*z*z*z)/4);
 printf("the value of y=%f",y);
}
