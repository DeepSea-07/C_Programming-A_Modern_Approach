#include <stdio.h>

int main(void)
{
    int number ,mult ;
    float add ;
    printf("Enter n for approximation of e: ");
    scanf("%d",&number);


    for(int i = 1 ; i <= number ; i++ ){
        mult = 1;
        for(int j = 1 ; j <= i ; j++){
            mult = mult * j;
        }

        add = add + (1.0f/(float)mult) ;
    }

    printf("Approx: %.2f\n",add);
    return 0;
}