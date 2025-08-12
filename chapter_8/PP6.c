#include <stdio.h>
#include <ctype.h>
#define MAX_WORDS 100

int main(void){
    char ch , sentence[MAX_WORDS];
    int sentence_length = 0 ;
    printf("Enter message: ");
    while((ch = getchar() )!= '\n'){
        sentence[sentence_length] = toupper(ch) ;
        sentence_length++;
    }
    printf("IN B1FF-speak: ");
    for(int i = 0 ; i < sentence_length ; i++){
        switch (sentence[i])
        {
        case 'A': printf("4"); break ;
        case 'B': printf("8"); break ;
        case 'E': printf("3"); break ;
        case 'I': printf("1"); break ;
        case 'O': printf("0"); break ;
        case 'S': printf("5"); break ;
        
        default: printf("%c",sentence[i]);
        }
    }
    printf("!!!!!!!!!!\n");

}