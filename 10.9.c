#include<stdio.h>
void main()
{
int i,j;
char ch='A';
for (i=1;i<=3;i++)
	{
	for(j=1;j<=5;j++)
  	   {
		if(j>=4-i&&j<=2+i)
	   printf("*");
		else{
	          printf("%c",ch);
	 	  ch++;
	            }
	    }
printf("\n");
	}

for (i=1;i<=2;i++)
	{
	for(j=5;j>=1;j--)
  	   {
		if(j>=i&&j>j-i)
	   printf("*");
		else{
	          printf("%c",ch);
	 	  ch++;
	            }
	    }
printf("\n");
	}
	
		

}
