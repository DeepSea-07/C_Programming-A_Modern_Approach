#include <stdio.h>

int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f",&amount);

    float tax = amount + ((5.0f/100.0f)*amount);
    printf("With tax added: $%.2f\n",tax);
}