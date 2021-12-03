#include<stdio.h>
#include<math.h>

int main()

{
    int a,b,sum,sub,mul,div,rem,sqa,sqb;
    printf("Enter the value of A and B: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    sqa=a*a;
    sqb=b*b;

    printf("\nSum of A and B= %d",sum);
    printf("\nSubstraction of A and B= %d",sub);
    printf("\nMultiplication of A and B= %d",mul);
    printf("\nDivision of A and B= %.2f",(float)div);
    printf("\nRemain of A and B= %d",rem);
    printf("\nAvarege of A and B= %.2f",(float)sum/2);
    printf("\nSquare of A and B= %d, %d",(int)sqa,sqb);
    
}
