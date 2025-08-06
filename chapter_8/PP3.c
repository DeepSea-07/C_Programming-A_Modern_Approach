#include <stdbool.h>
#include <stdio.h>

int main(void){   /* C99 only */

    bool digit_seen[10] = {false};

    int times_digit_repeated[10]={0};

    int digit;
    long n;

    while(true){
        printf("Enter a number: ");
        scanf ("%ld", &n);

        if(n<=0) break;
         
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
        for(int  i = 0 ; i < ((int) sizeof(times_digit_repeated)/sizeof(times_digit_repeated[0])) ; i++){
            times_digit_repeated[i]= 0 ;
        }
        printf("\n\n");
    }
    return 0;

}