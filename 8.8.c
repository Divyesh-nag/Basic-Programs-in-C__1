#include<stdio.h>
int main()
{
int a,i,count=0;
printf("put the value of the number you want to enter ");
scanf("%d",&a);

for(i=1;i<=a;i++)
{
if(a%i==0)
{
count++;
}
}
if(count==2)
printf("the number is prime");
else
printf("it's not prime");
return 0;
}
