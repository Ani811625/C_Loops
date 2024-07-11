//To print the AP -->100 97 94 91 88 85 82 79 ... up to a certain limit
#include<stdio.h>
void main()
{
    int i,n,a=100;
    printf("Enter the limit for the AP\n");
    scanf("%d",&n);
     printf("The AP is :\n");
    for(i=1;i<=n;i=i+1)
    {
        printf("%d",a);
        printf("\n");
        a=a-3;
    }
}