#include<stdio.h>
int main()
{
  int i,j,number=5;
  for(i=5 ;i>=1; --i)
  {
      for(j=1 ; j<=i; ++j)

      {
          number--;
          printf("%d",i);


      }
printf("\n");
  }

return 0;
}



