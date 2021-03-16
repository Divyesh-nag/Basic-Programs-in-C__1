#include<stdio.h>
int main()
{
int a,b,i,max;
printf("put the value of the number you want to enter ");
scanf("%d",&a);
printf("put the value of the number you want to enter ");
scanf("%d",&b);

for(i=2;i<=a && i<=b ;i++)
{
if(a%i==0 && b%i==0)
{
max=i;
}
}
printf("The value is %d",max);
return 0;
}
