#include <stdio.h>


int main(void)
{
    int word_count=1 , letter_count=1 , sum = 0;
    float average ;
    char ch;
    printf("Enter a sentence: ");
    scanf(" %1c",&ch);

    while((ch=getchar())!= '\n')
    {
        if (ch == ' ')
        {
            word_count++;

            sum = sum + letter_count;
            letter_count = 0;
            continue;
        }
        else
        {
            letter_count++;
        }

    }
    sum = sum + letter_count;

    printf("Average word length: %.1f\n",(float)sum/word_count);

    return 0;

}