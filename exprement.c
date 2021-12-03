#include<stdio.h>
int main()
{
    int i, j;

    for(i=1;i<=5;i++)
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
                printf("      ");

            }
            else if (i==5)
            {
                printf("     ");
            }



        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
