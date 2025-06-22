#include <stdio.h>

int main(void)
{ 
    int number , num1 , num2;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("The reversal is: ");

    do{

        num1 = number / 10;
        num2 = number % 10;

        number = num1;

        printf("%d",num2);
    }while(number > 0);
    printf("\n");
    
    return 0;
 

}
