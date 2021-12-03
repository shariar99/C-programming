#include<stdio.h>
int main()
{
    int i, j, k, l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=5-1;k>0;k--)
    {
        for(l=k;l>0;l--)
        {
            printf("*");
        }
        printf("\n");
    }
}

