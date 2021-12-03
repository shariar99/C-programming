#include<stdio.h>
#define pie 3.1416
int main()

{
    float r,h,area,vol;

    printf("Enter the Radious and hight of a cylinder: ");
    scanf("%f %f",&r,&h);

    area = 2*pie*r*(r+h);
    vol = pie*r*r*h;

    printf("'\nSurface area: %f",area);
    printf("\nVolume: %f",vol);
}
