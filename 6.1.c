#include<stdio.h>
void main()
{
         int a;
         clrscr();
         printf ("Enter the no.");
         scanf("%d",&a);
         if(a%7==0)
          {
             printf("No.is Divisible by 7");
          }
         else
         {
               printf("No is not Divisible by 7");
         }
               getch();
}