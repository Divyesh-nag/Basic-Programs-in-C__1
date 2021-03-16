#include<stdio.h>

void main()
{ int hour1,hour2,min1,min2,sec1,sec2;
  printf("\n enter the time in format in HH|MM|SS");
  scan("%d%d%d",hour1,min1,sec1);
  printf("\n enter the time in format in HH|MM|SS");
  scan("%d%d%d",hour2,min2,sec2);
  hour2+=hour1;
  min2+=min1;
  sec2+=sec1;
  printf("\n the time is %d %d %d ",hour2,min2,sec2);
}
  