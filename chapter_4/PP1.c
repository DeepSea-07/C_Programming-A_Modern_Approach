#include <stdio.h>

int main(void)
{ 
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d",&number);
    int num1 = number / 10;
    int num2 = number % 10;
    printf("The reversal is %d%d\n",num2,num1);
    return 0;
 

}
