#include<stdio.h>
void main()
{
int n=1;int j=3;
char ch='A';
for(int i=1;i<=5;i++)
	{
	for(int d=1;d<=j;d++)
	printf(" ");
	j--;
	if(i%2==0)
	{for(int j=1;j<=i;j++,ch++);
	  {
	  printf("%c",ch);
	  }
	}
	else
	{
	for(j=1;j<=i;j++)
	printf("%d",n);
	}
	printf("\n");
	}
	}
