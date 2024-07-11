//To print all the numbers from 1 to any digit
#include<stdio.h>
int main()
{
    int i,n;
    printf("Print all the numbers from 1 to any digit\n");
    scanf("%d",&n);
    printf("The numbers are\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        printf("\n");
    }
    return 0;
}