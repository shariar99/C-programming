#include<stdio.h>
int main()
{
    int base , exponent,power=1;
    int i;
    printf("enter your base: ");
    scanf("%d",&base);
    printf("enter your exponent:");
    scanf("%d",&exponent);
    int expo=exponent;
    while(expo <0 )
    {
        {
            power=power/base;
        }
    }
    if(exponent >0)
    {
        for(i =1 ;i<= exponent;i++)
        {
            power=power*base;
        }
    }
    printf("%d^%d=%d ",base ,exponent ,power);
    return 0;
}
