#include <stdio.h>
int main()
{
    int num, sum = 0;
    do
    {
        printf("Enter a number: ",num);
        scanf("%d", &num);
        sum =sum+num;

    }while(num != 0);

    printf("Total = %d",sum);
    return 0;
}
