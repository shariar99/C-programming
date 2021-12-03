#include<stdio.h>

int main()

{
    int x,area,vol;
    printf("Give the value of a line in a cube: ");
    scanf("%d",&x);

    vol = x*x*x;
    area = 6*x*x;

    printf("Surface area= %d\n",area);
    printf("Volume= %d\n",vol);
}
