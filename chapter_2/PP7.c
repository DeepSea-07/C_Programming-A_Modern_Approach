#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    int twenty = amount/20;
    amount = amount - 20*twenty;

    int ten = amount/10;
    amount = amount - 10 * ten;

    int five = amount/5;
    amount = amount - 5 * five;

    printf("$20 bills: %i\n$10 bills: %i\n $5 bills: %i\n $1 bills: %i\n",twenty,ten,five,amount);
    return 0;
}