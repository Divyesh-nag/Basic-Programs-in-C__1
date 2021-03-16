#include<stdio.h>
int main()
{
int a,i,sum=0;
printf("put the value of the number you want to enter ");
scanf("%d",&a);

for(i=1;i<a;i++)
{
if(a%i==0)
{
sum=sum+i;
}
}
if(sum==a)
printf("the number is perfect");
else
printf("it's not perfect");
return 0;
}
