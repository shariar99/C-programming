 #include <stdio.h>
  int main()
{
    int i, num, odd = 0, even= 0;

    printf("Enter the value of num\n");
    scanf("%d", &num);
    i=1;
    while ( i <= num)
    {
        if (i % 2 == 0)
            even= even + i;
        else
            odd = odd+ i;

            i++;
    }
    printf("Sum of all odd numbers  = %d\n", odd);
    printf("Sum of all even numbers = %d\n", even);
}

