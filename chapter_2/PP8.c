#include <stdio.h>

int main(void)
{
    float loan, rate, payment ;
    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);
    float balance = loan;
    float monthly_rate = (rate/100.00f)/12 ;

    balance = balance - (payment-(balance*monthly_rate));
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = balance - (payment-(balance*monthly_rate));
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = balance - (payment-(balance*monthly_rate));
    printf("Balance remaining after third payment: %.2f\n", balance);

}