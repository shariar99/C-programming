#include<stdio.h>
int main()
{

int i,j,k,l;
    for(i=0;i<=10;i++)
    {
       for(j=0 ;j<=4 ;j++)
       {
         printf("*");
       }
       for(k=1 ;k<=i ;k++)
       {
           printf(" ");
       }
       for(j=0 ;j<=4 ;j++)
       {
           printf("*");
       }
       for(l=8 ;l>=i;l--)
       {
           printf(" ");
       }
//       for(l=8 ;l>=j ;l--)
//       {
//           printf("*");
//       }
        for(k=10 ;k>=1 ;k--)
       {
           printf("*");
       }

//       for(j=0 ;j<=4 ;j++)
//       {
//           printf("*");

//       }
        printf("\n");



    }


    return 0;
}
