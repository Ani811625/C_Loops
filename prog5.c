//To print the table of a given number
#include<stdio.h>
void main()
{
    int a,n,i;
    printf("Enter the digit upto which you want the table of a number\n");
    scanf("%d",&n);
    printf("Enter the digit whose table you want\n");
    scanf("%d",&a);
    printf("The table of %d is :\n",a);
    for(i=1;i<=n;i++)
    {
      printf("%d * %d = %d",a,i,a*i);
      printf("\n");
    }
}