#include<stdio.h>
#include<math.h>
int main()
{
	int a,count,d,j,s=0;
	printf("Enter the number");
	scanf("%d",&a);
	count=0;
	j=a;
	while(j!=0)
	{
		d=j%10;
		j=j/10;
		count++;
	}
	j=a;
	while(j!=0)
	{
		d=j%10;
		j=j/10;
		s=s+pow(d,count);
	}
	if(s==a)
	{
		printf("It's an armstrong number");
	}
	else
	{
		printf("noooo ");
	}
	return 0 ;
}
