#include<stdio.h>
int main()
{
    int  sp, cp, amt;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if(sp>cp)
    {
        amt=sp-cp;
        printf("profit is %d",amt);
    }
    else if(cp>sp)
    {
        amt=cp-sp;
        printf("loss is %d",amt);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}
