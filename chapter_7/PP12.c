#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


int main(void)
{

    float a , b ;
    char symbol;

    printf("Enter an expression: ");
    scanf("%f %c %f",&a ,&symbol ,&b);
    while(true){


        switch (symbol){
            case '+' : a = a + b ; break;
            case '-' : a = a - b ; break;
            case '*' : a = a * b ; break;
            case '/' : a = a / b ; break;
            default : break;
        }


        scanf("%1c",&symbol);
        if(symbol == '\n' || symbol==EOF){
            break;
        }
     

     

        scanf(" %f", &b);
       
    }

    printf("Value of expression: %.1f\n",a);
    return 0;
}