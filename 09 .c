#include<stdio.h>

int main()

{
    float p,b,h;

    printf("Enter the value of Perpendicular and Base number of triangle: ");
    scanf("%f %f",&p,&b);

    h=sqrt((p*p)+(b*b));

    printf("\nHipotenuse = %f",h);
}
