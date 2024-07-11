//To print the word "Hello World" n times
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of times you want to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Hello World\n");
    }
    return 0;
}