 #include<stdio.h>
 int main()
 {
     char ch;
      printf("enter any cherecter:");
      scanf("%c",&ch);
      if(isupper(ch))
      {
          printf("%c is a uppercase ",ch);

      }

  else if(islower(ch))
{
    printf("%c is lowercase",ch);

}
else
{
    printf("%c is not alphabet",ch);
}
        return 0;
 }
