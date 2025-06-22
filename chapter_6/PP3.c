#include <stdio.h>

int main(void)
{
    int nume , denom ,n ,m, rem ;

    printf("Enter a fraction: ");
    scanf("%d /%d",&nume,&denom);

    m = nume ;
    n= denom ;

    while(1){
        if(n == 0) break;

        rem = m%n;
     
        m = n;
        n = rem ;
        
    }

    nume = nume / m;
    denom = denom / m ;

    printf("In lowest term: %d/%d\n",nume,denom);

    return 0;
}