//To check wether a number is a prime number or not
#include<stdio.h>
void main()
{
    int i,n,a=0;
    printf("Enter the number to check wether it is a prime or not:\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           // printf("The number is not a prime number.");
           a=1;
            break;
        }
    }
    if(a==0)
    {
        printf("The number is a prime number.");
    }
    else
    {
        printf("The number is a composite number."); 
        
    }
}