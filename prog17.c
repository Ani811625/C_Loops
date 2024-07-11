//To print the sum of the series --> 1 -2 3 -4 5 -6 ... upto n terms 
#include<stdio.h>
void main()
{
    int i,n,k=0,j;
    printf("Enter the limit or end of the series:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            k=k-i;
        }
        else{
            k=k+i;
        }
    }
    printf("The sum of the series is :\n%d",k);
}