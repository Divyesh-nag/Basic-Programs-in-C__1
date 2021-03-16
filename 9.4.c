#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number - ");
	scanf("%d",&n);
 printf("the prime factors are");
	for(i=2;n>1;i++)
	{
		while(n%i==0)
		{
			printf("%d*",i);
			n=n/i;
		}
	
	}
    return 0;
}
