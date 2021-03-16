#include<stdio.h>
int main()
{
int y;
float i,sum=0.0;
printf("put the value of the number you want to enter ");
scanf("%d",&y);
for(i=1;i<=y;i++)
{
sum=sum+(1/i);
}
printf("the sum is %f",sum);
return 0;
}
