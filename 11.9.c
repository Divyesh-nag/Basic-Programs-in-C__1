
#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}
