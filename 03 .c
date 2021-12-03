#include<stdio.h>

int main()

{
    float c,fahrenheit;

    printf("Enter the Celsius temperature value: ");
    scanf("%f", &c);
    fahrenheit= (c*1.8)+32;
    printf("Temperature in Fahrenheit degrees: %f",fahrenheit);

}
