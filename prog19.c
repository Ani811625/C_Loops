//To print the FACTORIAL of numbers upto n
#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("Enter the number whose factorial is required:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
         printf("The factorial of %d is:\n%d\n",i,fact);
    }
   // printf("The factorial of %d is:\n%d",n,fact);
}