#include<stdio.h>
int  shohan()
{
    char ch;
    printf("Enter your cherecter: ",ch);\
    scanf("%c",&ch);
    if(isupper(ch)){
        printf("%c is uppercase",ch);

    }
    else if(islower(ch)){
        printf("%c is lowercase",ch);
    }
    else{
        printf("%c is not alphabet",ch);
    }
}
int main()
{
 shohan();
return 0;

}
