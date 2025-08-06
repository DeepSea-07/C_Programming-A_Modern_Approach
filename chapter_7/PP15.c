//       (a): 7
//       (b): 13
//       (c): 20
//       (d): 20   i guess my compiler doesn't support long long
//       (e): 34
//       (f): 170
//       (g): 1754

/* NOTE : when checking for options /a/b/c/d -- remove isinf() argument from if statement*/


#include <stdio.h>
#include <math.h>

int main(void)
{
    typedef long double datatype ;
    
    datatype  factorial = 1 , fact ;

    int i;

    printf("Press enter to find largest value for which the program correctly prints the factorial of n:");
    getchar();


    for(i = 1 ;  ; i++)
    {
        fact = factorial;
        factorial = factorial *  i ;

        printf("fact: %70Lf      factorial:%70Lf      n:%5d\n",fact,factorial,i);
        if(fact > factorial || isinf(factorial) ) break;

        
    }
    printf("Largest value of n for which the program correctly prints the factorial: %d\n",(i-1));

    return 0;
}

