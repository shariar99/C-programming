 #include<stdio.h>
 int main()
 {
     int num, i, sum=0,n=0,avg;

     for(i=0;i<=10 ;i++)
     {

         printf("Enter number: ");
         scanf("%d",&num);
         if(num%2==0)
         {
             continue;
         }n++;



         sum += num;

     }

     printf("Sum=%d",sum);
     avg=sum/n;
     printf("Avarege num:%d",avg);

     return 0;
 }
