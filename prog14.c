//To print the sum of digits of a number
#include<stdio.h>
void main()
{
    int n,i=1,sum=0,a;
    printf("Enter the number:\n");
    scanf("%d",&n);
   while(n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
        i++;
    }
    printf("The number of the digits is:%d\n",i-1);
    printf("The sum of the digits is:%d",sum);
}