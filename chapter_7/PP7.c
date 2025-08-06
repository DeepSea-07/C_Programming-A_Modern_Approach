/*Add two fractions*/

#include <stdio.h>

int main(void)
{
    int num1, denom1 , num2, denom2, result_num , result_denom;
    char symbol;

    printf("Enter two fractions separated by sign: ");
    scanf("%d /%d %1c %d /%d",&num1 , &denom1,&symbol , &num2, &denom2);

    switch (symbol)
    {
        case '+':
            result_num = num1 * denom2 +num2 * denom1;
            result_denom = denom1 * denom2 ;
            printf("The sum is %d/%d\n",result_num,result_denom);
            break;
        
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2 ;
            printf("The value after substraction is %d/%d\n",result_num,result_denom);
            break;

        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2 ;
            printf("The value after multiplication is %d/%d\n",result_num,result_denom);
            break;
        
        case '/':
            result_num = num1 * denom2 ;
            result_denom = num2 * denom1 ;
            printf("The value after division is %d/%d\n",result_num,result_denom);
            break;

        default : break;
    }
    

    return 0;
}