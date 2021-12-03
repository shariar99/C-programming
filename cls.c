#include <stdio.h>
int main() {
   int n ,count = 0;
   float sum = 0;
   for (int i = 1; i <= 10; i++) {
      if(i%2 != 0) {
         sum = sum + i;
         continue;
      }
         n++;

   }
   float average = sum/n;
   printf("The average of odd numbers till %d is %f",n, average);
   return 0;
}
