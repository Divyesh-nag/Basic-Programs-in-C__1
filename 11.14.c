#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j,k;
    system("clear");
    for(i=5;i>=1;i--)
    {
      
        
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
     for(k=1;k<=6-i;k++)
     { 
     	printf("  ");
      }
    
    }
	printf("\n");
    return 0;
}
