#include <stdio.h>

int main(void)
{
    int mult , i ;
    float number , add , div = 5.0 ;
    printf("Enter the smallest number you want to check: ");
    scanf("%f",&number);


    for(i = 1 ; number <= div ; i++ ){
        mult = 1;
        for(int j = 1 ; j <= i ; j++){
            mult = mult * j;
        }

        div = 1.0f/(float)mult;

      

        add = add + div ;
    }

    printf("Program stopped in %d term\n",i);
    return 0;
}