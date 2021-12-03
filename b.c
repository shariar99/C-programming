#include<stdio.h>
#include<conio.h>

int FIBO(int);

void main()
{
        int N, F, i;
        clrscr();

        printf("Enter the value of N:  ");
        scanf("%d",&N);

        printf("\nFibonacci sequence for N = %d is:\n\n",N);

        for(i=1;i<= N;i++)
        {
            F=FIBO(i);
            printf("%d\t",F);
        }
        getch();

}

int FIBO(int NUM)
{
    int FIB, FIBA, FIBB;
    if (NUM==0 || NUM==1)
    {
        FIB=NUM;
        return(FIB);
    }
    FIBA=FIBO(NUM-2);
    FIBB=FIBPO(NUM-1);

    FIB=FIBA + FIBB;
    return(FIB);
}
