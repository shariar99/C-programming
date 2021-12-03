 #include <stdio.h>
 int evenodd();
 for (i =1; i <= num; i++)
    {
        if (i % 2 == 0)
            even= even + i;
        else
            odd = odd+ i;
    }
  int main()
{
    int i, num, odd = 0, even= 0;

    printf("Enter the value of num\n");
    scanf("%d", &num);

    printf("Sum of all odd numbers  = %d\n", odd);
    printf("Sum of all even numbers = %d\n", even);
}
