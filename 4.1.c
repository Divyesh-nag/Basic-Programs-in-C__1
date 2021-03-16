#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;

   
    printf("Enter any number to find square root: ");
    scanf("%d", &num);


    root = sqrt(num);


    printf("Square root of %.2lf = %.2lf", num, root);

    return 0;
}