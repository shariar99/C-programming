 #include<stdio.h>
 int main()
 {
     int num, i, sum=0;

     for(i;i<=2;i)
     {

         printf("Enter number: ");
         scanf("%d",&num);
         if( num<0)
             break ;

         sum += num;
         ;
     }

     printf("Sum=%d",sum);

     return 0;
 }

