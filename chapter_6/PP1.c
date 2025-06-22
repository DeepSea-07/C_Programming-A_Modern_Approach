#include <stdio.h>

int main(void){

    float number , largest ;

    do{
        printf("Enter a number : ");
        scanf("%f",&number);
        if(number > largest) largest = number ;
    }while(number>1);

    printf("The largest number entered was %.2f\n",largest);
    return 0;
}