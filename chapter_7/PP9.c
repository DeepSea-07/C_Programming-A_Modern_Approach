#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hr1 ,min1 ;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf(" %d : %d %1c",&hr1 ,&min1 ,&ch);
    while(getchar() != '\n');

    if(toupper(ch)=='A'){
        if(hr1==12) hr1 = 0 ;
        printf("Equivalent 24-hour time: %02d:%02d\n",hr1,min1);
        return 0;
    }
    else{
        hr1 = hr1 + 12 ;
        if(hr1==24) hr1 = 12;
        printf("Equivalent 24-hour time: %02d:%02d\n",hr1,min1);
        return 0;
    }
}