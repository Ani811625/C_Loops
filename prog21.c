//To print FIBONACCI series
#include<stdio.h>
void main()
{
    int n,i,sum,a=1,b=1;
    printf("Enter the no.of terms of fibonacci series to be printed:\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
       a=b;
       b=sum;
       sum=a+b;
       printf("The %d term of the fibonacci series is:\n%d\n",i,sum);
    }
    //printf("The %d term of the fibonacci series is:\n%d",n,sum);
}