#include <stdio.h>

int main(void)
{
    int m , n , rem ;

    printf("Enter two integers: ");
    scanf("%d %d",&m,&n);

    while(1){
        if(n == 0) break;

        rem = m%n;
     
        m = n;
        n = rem ;
        
    }

    printf("Greatest common divisor: %d\n",m);

    return 0;
}