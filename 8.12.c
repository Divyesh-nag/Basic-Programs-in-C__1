#include<stdio.h>
int main()
{
int i,b=0,c=0,y;
printf("put the value of the number you want to enter ");
scanf("%d",&y);
for(i=1;i<=y;i++)
{
b=b+i;
c=c+b;
}
printf("The value is %d",c);
return 0;
}
