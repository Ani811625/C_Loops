//To print all the odd numbers upto the limit entered by the user
#include<stdio.h>
void main()
{
    int i,n;
    printf("Input the digit upto which you want to print all the odd numbers\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d",i);
            printf("\n");
        }
    }
}