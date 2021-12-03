#include<stdio.h>
int main()
{
    int i, j, digit=1;

    for(i=1;i<=4;i++)
    {
         if(i==1)
            {
                printf("         ");
            }
            else if(i==2)
            {
                printf("        ");
            }
            else if(i==3)
            {
                printf("       ");
            }
            else if(i==4)
            {
                printf("     ");
            }


        for(j=1;j<=i;j++)
        {
            printf("%d",digit);
            digit++;
        }
        printf("\n");
    }
}
