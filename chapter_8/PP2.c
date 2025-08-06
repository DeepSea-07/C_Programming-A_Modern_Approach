#include <stdbool.h>
#include <stdio.h>

int main(void){   /* C99 only */

    bool digit_seen[10] = {false};

    int times_digit_repeated[10]={0};

    int digit;
    long n;
    printf("Enter a number: ");
    scanf ("%ld", &n);
    while (n > 0){
        digit = n % 10;
        
        times_digit_repeated[digit]++;

        digit_seen [digit] = true;
        n /= 10;
    }

    printf("Digits      : ");
    for(int i = 0 ; i < 10 ; i++){
        printf(" %d",i);
    }
    printf("\nOccurrences : ");
    for(int i = 0 ; i < 10 ; i++){
        printf(" %d",times_digit_repeated[i]);
    }
    printf("\n");
    return 0;

}