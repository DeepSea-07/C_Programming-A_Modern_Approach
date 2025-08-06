#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter phone number : ");
    ch = getchar();

    while(ch!='\n')
    {
        if(65<=ch && ch <=90 )
        {
            if(ch=='Q'|| ch=='Z') ;
            else if(ch <= 67) printf("2");
            else if(ch <= 70) printf("3");
            else if(ch <= 73) printf("4");
            else if(ch <= 76) printf("5");
            else if(ch <= 79) printf("6");
            else if(ch <= 83) printf("7");
            else if(ch <= 86) printf("8");
            else if(ch <= 89) printf("9");

            ch=getchar();
        }
        else
        {
            printf("%c",ch);
            ch=getchar();
        }
    }
    printf("\n");
    return 0;

}