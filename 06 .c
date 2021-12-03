#include<stdio.h>

int main()

{
    double a,b,c,d,y,x;
    printf("Enter the value of X= ");
    scanf("%lf",&x);

    a=(x-1)/x;
    b=(a*a)/2;
    c=(a*a*a)/3;
    d=(a*a*a*a)/4;
    y=a+b+c+d;

    printf("Y=%lf",y);
}
