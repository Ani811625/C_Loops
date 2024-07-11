//To print all the even numbers upto the limit entered by the user
/*#include<stdio.h>
void main()
{
    int i,n;
    printf("Input the digit upto which you want to print all the even numbers\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
            printf("\n");
        }
    }
}*/
#include<stdio.h>
void main()
{
    int i,n,a=2;
    printf("Input the digit upto which you want to print all the even numbers\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("%d ",a);
       a+=2;
    }
}