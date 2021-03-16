#include<stdio.h>
int main()
{
int a,b=1,i;
printf("put the value of the number you want to enter ");
scanf("%d",&a);
for(i=a;i>=1;i--)
{
b=b*i;
}
printf("The value is %d",b);
return 0;
}
