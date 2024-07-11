//To print all ARMSTRONG numbers from 1 ---> 500
#include<stdio.h>
void main()
{
    int n,i,a,p,j;
    for(j=1;j<=500;j++)
    {
        i=j;
        p=0;
    while(i!=0)
    {
        a=i%10;
        p=p+a*a*a;
        i=i/10;
    }
    if(p==j)
    {
        printf("%d\n",j);
    }
    }
}