#include<stdio.h>
void main()
{
int i,j;


  for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
         if(i%2==0)
            printf("%c",j+64);
            else
            printf("%c",i+64);
        }
        printf("\n");
    }
    }
