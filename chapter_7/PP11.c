#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch , la;

    printf("Enter a first and last name: ");
    scanf(" %c",&ch);

    while(getchar() != ' ');

    scanf(" %c",&la);
    while(la != '\n'){
        printf("%c",la);
        la=getchar();
        if(la == ' ') break;
    }


    printf(", %c.\n",ch);
    return 0;
}