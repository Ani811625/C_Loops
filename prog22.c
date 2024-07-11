//To print all CAPITAL LETTERS along with their ASCII values
#include<stdio.h>
void main()
{
    int i;
    char ch;
    for(i=65;i<=90;i++)
    {
      //ch=(char)i;
      printf("ASCII Value : %d and Character is: %c\n",i,(char)i);
    }
}