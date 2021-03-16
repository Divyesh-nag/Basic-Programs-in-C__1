#include<stdio.h>
void main()
{
int i,j,n=0;
for (i=1;i<=5;i++)
	{
	for(j=1;j<=9;j++)
  	   {
  	  n=i+j;
  	  if(n%2==0)
	   printf(" ");
	  else if (j>=6-i&&j<=4+i)
	   printf("1");
	   else
	   printf(" ");
	
	   }
printf("\n");	
	}	

}
