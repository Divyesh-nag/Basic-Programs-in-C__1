#include<stdio.h>
int main()
{
int a,b=0,c=1,sum,i;
printf("put the value of the number you want to enter ");
scanf("%d",&a);

for(i=1;i<=a;i++)
{
printf("\n %d",b);
sum=b+c;
b=c;
c=sum;
}
return 0;
}
