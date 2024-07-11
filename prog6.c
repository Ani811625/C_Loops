//To print the AP -->1 3 5 7 9 11 13 15 ... up to a certain limit
#include<stdio.h>
void main()
{
    int i,n,a=1;
    printf("Enter the limit for the AP\n");
    scanf("%d",&n);
     printf("The AP is :\n");
    for(i=1;i<=n;i=i+1)
    {
        printf("%d",a);
        printf("\n");
        a=a+2;
    }
}