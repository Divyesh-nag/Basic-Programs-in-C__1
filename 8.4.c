#include<stdio.h>
int main()
{
int a,b=0,i;
printf("put the value of the number you want to enter ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b=b+i*i;
}
printf("The value is %d",b);
return 0;
}
