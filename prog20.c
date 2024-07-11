//To print a particular term of FIBONACCI SERIES
#include<stdio.h>
void main()
{
   int a=0,b=1,c,n;
   c=a+b;
    printf("Enter the no.of terms required:");
     scanf("%d",&n);
    printf("%d ",a);
     printf("%d ",b);
    for(int i=3;i<=n;i++)
   {
      printf("%d ",c);
      a=b;
      b=c;
      c=a+b;
   }
   //printf("%d ",c);
}