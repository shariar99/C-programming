#include<stdio.h>
int  main()
{
    int a, b, sum, sub, mul,squre ,rem;
    float avg , dev;
    printf("Enter your value of a&b=");
    scanf("%d", &a );
    scanf("%d", &b);

    sum = a+b;
    sub = a-b;
    mul = a*b;
    squre =(a*a)+(b*b);
    rem = a%b;
    avg = (a+b)/2;
    dev = a/b;

    printf("sum =%d\n", sum);
    printf("sub =%d\n", sub);
    printf("mul =%d\n", mul);
    printf("squre =%d\n", mul);
    printf("rem =%d\n", rem);
    printf("avg =%f\n", avg);
    printf("dev =%f\n", dev);

}
