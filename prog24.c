//To check wether a number is PALINDROME number or not
#include<stdio.h>
void main()
{
    int n,a,p=0,num;
    printf("Enter the number to check:\n");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        a=n%10;
        p=p*10+a;
        n=n/10;
    }
    if(p==num)
    {
        printf("The number is a palindrome number");
    }
    else
    {
        printf("The number is not a palindrome number");
    }
}