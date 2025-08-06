#include <stdio.h>

int main(void)
{
    int days, i = 1 , first , square ;

    printf("Enter number of days in month: ");
    scanf("%d",&days);

    printf("Enter starting day of the week (1=Sun , 7=Sat): ");
    scanf("%d",&first);

    first -= 1;

    int gap = first ;

    for( ; i <= days ; ){
        if(first > 0){
            printf("    ");
            first--;
            continue;
        }

        printf("%4d",i);

        i++;

        gap++ ;

        if(gap == 7) {
            gap = 0; 
            printf("\n");
        }

    }
    printf("\n");
    return 0;    
}