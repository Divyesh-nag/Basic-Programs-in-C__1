#include<stdio.h>



void main()

    {

       int p,r;           

       printf("Enter the value of paisa");       

       scanf("%d",&p);       

       r=p/100;        

       p=p%100;     

       printf("It is %d rube %d paisa",r,p);  



    }