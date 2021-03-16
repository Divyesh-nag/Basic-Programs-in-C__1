#include<stdio.h>
int main()
{
int i,a,x,y;
printf("put the value of the number you want to enter ");
scanf("%d",&y);
printf("The factors are "); 
i=1;
while(i<=y)
{
if(y%i==0)

printf("\n %d",i);
i++;
}
return 0;
}
