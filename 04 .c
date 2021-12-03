#include<stdio.h>

int main()

{
    float celsius,f;

    printf("Enter the Fahrenheit temperature value: ");
    scanf("%f", &f);
    celsius= (f-32)/1.8;
    printf("Temperature in Celsius degrees: %f",celsius);

}

