#include <stdio.h>
#define MAX_CHARS 100

int main(void){
    int length=0 , index ;
    char words[MAX_CHARS] , ch;

    printf("Enter the sentence: ");
    
    for( ;ch=getchar(), ch!='\0'&& length < MAX_CHARS ; length++){
         
        words[length]=ch;
        if(ch=='.'||ch=='?'||ch=='!'){
            break;
        }
    }
    length--;
    printf("In reverse Order: ");
    while(length>0){
        while(words[length] != ' ' && length != 0){
            length--;
        };
        index = length-1 ;
        if(length == 0 ) index++ ;
        if(length != 0) length++ ;
        while(words[length] != ' ' && words[length] != '\0' && words[length] != '.' && words[length] != '!' && words[length] != '?'){
            printf("%c",words[length++]);
        }
        printf(" ");

        length = index;
    }
    printf("\b%c\n",ch);
    return 0;

}