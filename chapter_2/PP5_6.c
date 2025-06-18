#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter value of x : ");
    scanf("%f",&x);

    //for problem 5
    //float ans = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6 ;
    // for problem 6
    float ans = ((((3 * x +2 )* x - 5 )* x -1) * x + 7) * x -6;
    printf("%.2f\n", ans);
    return 0;
}