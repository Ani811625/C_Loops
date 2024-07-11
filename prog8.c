//To print the GP -->3 12 48 192 768... up to a certain limit
#include<stdio.h>
void main()
{
    int i,n,a=3;
    printf("Enter the limit for the GP\n");
    scanf("%d",&n);
    printf("The GP is :\n");
    for(i=1;i<=n;i=i+1)
    {
        printf("%d",a);
        printf("\n");
        a=a*4;
    }
}