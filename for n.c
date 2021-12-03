#include <stdio.h>
int main(){
int v,w,x,y;
    for(v=0 ;v<=10 ;v++ )
    {
        for(w=0 ;w<=3 ;w++)
        {
            printf("*");
        }
        for(x=1 ;x<=v ;x++)
        {
            printf(" ");
        }
        for(w=0 ;w<=3 ;w++)
        {
            printf("*");
        }
        for(y=8 ;y>=v ;y--)
        {
            printf(" ");
        }
        for(w=0 ;w<=3 ;w++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
