#include <stdio.h>

int main(void)
{
    printf("Enter radius of the sphere : ");
    float radius;
    scanf("%f",&radius);
    float formula = (4.0f/3.0f)* 3.14 * radius * radius * radius;
    printf("formula: %f \n",formula);
}