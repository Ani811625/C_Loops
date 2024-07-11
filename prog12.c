//To print all odd numbers using continue statements
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the limit to print odd numbers:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d ",i);
    }
}