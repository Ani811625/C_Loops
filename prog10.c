//To print the GP -->100 50 25 12.5 6.25 ... up to a certain limit
#include<stdio.h>
void main()
{
    int i;
    float a=100.0;
    int n;
    printf("Enter the limit for the GP\n");
    scanf("%d",&n);
    printf("The GP is :\n");
    for(i=1;i<=n;i=i+1)
    {
        printf("%f",a);
        printf("\n");
        a=a/2.0;
    }
}