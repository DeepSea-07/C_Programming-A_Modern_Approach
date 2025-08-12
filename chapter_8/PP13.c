#include <stdio.h>
#include <ctype.h>
#define ASSUME_TOTAL_LAST_NAME_CHARACTERS 20
int main(void)
{
    char last_name[ASSUME_TOTAL_LAST_NAME_CHARACTERS];
    int last_name_count = 0; 
    int count = 0;
    char ch , la;

    printf("Enter a first and last name: ");
    scanf(" %c",&ch);

    while(getchar() != ' ');

    scanf(" %c",&la);
    while(la != '\n'){
        printf("%c",la);

        last_name[last_name_count]=la;
        last_name_count++;

        la=getchar();
        if(la == ' ') break;
    }


    printf(", %c.\n",ch);
    return 0;
}