#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    int x ;
    double y=1 , xbyy , average , copy ;

    printf("Enter a positive number: ");
    scanf(" %i",&x);

    while(getchar() != '\n');

    while(true)
    {
        xbyy = x/y ;
        average = (y+ xbyy)/2 ;

        copy = y ;
        y = average ;

        if(fabs((copy-y)) < (0.00001*y)) break;


    }

    printf("Square root: %lf\n",copy);
    return 0;
}