#include <stdio.h>
#include <ctype.h>
#define MAX_CHARS 80
int main(void){
    char words[MAX_CHARS] , ch;
    int i , shift ;
    printf("Enter message to encrypt: ");
    
    for(i = 0 ; i < 80 ; i++ ){
        ch=getchar();
        words[i]=ch;
        if(ch =='\n') break;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%d",&shift);
    while(getchar() != '\n');
    printf("Encrypted message: ");
    for( int j = 0 ; j <= i ; j++){
        ch = words[j];
        if(isupper(ch)){
            printf("%c",((ch - 'A') + shift ) %26 + 'A');
        }
        else if(islower(ch)){
            printf("%c",((ch - 'a') + shift ) %26 + 'a');
        }
        else{
            printf("%c",ch );
        }
    }

    return 0;    
}