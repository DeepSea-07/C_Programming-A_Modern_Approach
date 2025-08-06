#include <stdbool.h>
#include <stdio.h>

int main(void){   /* C99 only */
    bool digit_seen[10] = {false};
    bool repeated = false ;
    int digit;
    int digits_repeated[10];
    int digit_count = 0;
    long n;
    printf("Enter a number: ");
    scanf ("%ld", &n);
    while (n > 0){
        digit = n % 10;
        if (digit_seen [digit]){
            repeated = true;
            digits_repeated[digit_count]=digit;
            digit_count++ ;
        }

        digit_seen [digit] = true;
        n /= 10;
    }
    if (repeated){
        printf("Repeated digit(s) : ");
        for(int i = digit_count-1 ; i >= 0 ; i--){
            printf(" %d",digits_repeated[i]);
        }
        printf("\n");
    }
    else
        printf("No repeated digit\n");
    return 0;
}