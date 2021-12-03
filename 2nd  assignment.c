#include<stdio.h>
int main()
{
    float  a ,b ,c ,root ,x1 ,x2;
    printf("enter your value of a=");
    scanf("%f",&a);
    printf("enter your value of b=");
    scanf("%f",&b);
    printf("enter you value of c=");
    scanf("%f",&c);

    root=sqrt((b*b)-4*a*c);

    x1=(-b+root)/2*a;

    x2=(-b-root)/2*a;

    printf("x1=%f",x1);

    printf("x2=%f",x2);

}
