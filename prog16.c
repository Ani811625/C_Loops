//To print the reverse of a given number and print the sum of the original number and reverse number
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=0,sum=0,a,j,r=0,k=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int p=n;
   while(n!=0)
    {
        a=n%10;
        //sum=sum+a;
       
        k=(k*10)+a;
        
         n=n/10;
        i++;
    }
    printf("The number in reverse order is:\n%d\n",k);
   printf("The sum of givn number and its reverse is :\n%d",(p+k));
}