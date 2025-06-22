#include <stdio.h>

int main(void)
{
    float loan, rate, payment ;
    int number ;
    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);
    float balance = loan;
    float monthly_rate = (rate/100.00f)/12 ;

    printf("Enter number of payment : ");
    scanf("%d",&number);

    for(int i = 0 ; i < number ; i++ ){
        
        balance = balance - (payment-(balance*monthly_rate));
        printf("Balance remaining : %.2f\n", balance);
    
    }
}