#include<stdio.h>
int main()
{
int i,b=1,x,y;
printf("put the value of the number you want to enter ");
scanf("%d",&y);
printf("put the value of the number you want to enter ");
scanf("%d",&x);



for(i=1;i<=x;i++)
{
b=b*y;
}
printf("The value is %d",b);
return 0;
}
