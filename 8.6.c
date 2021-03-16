#include<stdio.h>
int main()
{
int a,b=0,d;
printf("put the value of the number you want to enter ");
scanf("%d",&a);
while(a!=0)
{
d=a%10;
a=a/10;
b=b+d;
}
printf("The value is %d",b);
return 0;
}
