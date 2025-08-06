#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch;

    printf("Enter a sentence: ");
    while( (ch=toupper(getchar())) != '\n'){

        if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') count++;
    }

    printf("Your sentence contains %d vowels . \n",count);

    return 0;
}