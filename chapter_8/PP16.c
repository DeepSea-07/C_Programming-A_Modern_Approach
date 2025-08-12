#include <stdio.h>
#include <ctype.h>

int main(void){
    int alphabet[26]={0} , index;
    char ch;
    printf("Enter first word: ");

    while(((ch=tolower(getchar())) != '\n')){
        if(isalpha(ch)){
            ch = tolower(ch);
            index = ch -'a';
            alphabet[index]++;
           
        }
    }

    printf("Enter second word: ");

    while(((ch=tolower(getchar())) != '\n')){
        if(isalpha(ch)){
            ch = tolower(ch);
            index = ch -'a';
            alphabet[index]--;
      
        }
    }

    for(int i = 0 ; i < 26 ;i++){
        if(alphabet[i] != 0){
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    printf("The words are anagrams.\n");
    return 0;
}