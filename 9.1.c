#include<stdio.h>
int main()
{
int i,a,x,y;
printf("put the value of the number you want to enter ");
scanf("%d",&y);
printf("put the value of the number till you want to find the table  ");
scanf("%d",&x);



for(i=1;i<=x;i++)
{
a=y*i;
printf("\n %d",a);
}
return 0;
}
