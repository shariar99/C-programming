#include<stdio.h>
int main()
{

    int i,j,k,l;
    for(i=0 ;i<=11 ;i++ )
    {
        for(j=0 ;j<=3 ;j++)
        {
            printf("*");
        }
        for(k=1 ;k<=i ;k++)
        {
            printf(" ");
        }
        for(j=0 ;j<=3 ;j++)
        {
            printf("*");
        }
        for(l=10 ;l>=i ;l--)
        {
            printf(" ");
        }
        for(j=0 ;j<=3 ;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
