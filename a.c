#include<stdio.h>
#include<conio.h>

void tower(int, char[],char[],char[]);

void main()
{
    int n;


    printf("Enter the number of disks to be transferred:  ");
    scanf("%d",&n);

    if(n<1)
    {
        printf("\nincorrect value");

    }
    else
    {
        printf("\nthe following moves are requred for n = %d\n\n",n);
        tower(n,"beg","aux","end");
    }
    getch();
}
void tower(int num, char a[5],char b[5],char c[5])
{
    if (num==1)
    {
        printf("%s ->%s\t",a,c);
        return;
    }
    tower(num-1,a,b,c);
    printf("%s -> %s\t",a,c);
    tower(num-1,b,a,c);
    return;
}
