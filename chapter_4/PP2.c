#include <stdio.h>

int main(void)
{ 
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d",&number);
    int num1 = number / 10;
    int num2 = number % 10;

    int num3 = num1 / 10;
    int num4 = num1 % 10;
    printf("The reversal is %d%d%d\n",num2,num4,num3);
    return 0;
 

}
