#include <stdio.h>

int main(void)
{ 
    int num,q1,q2,q3,q4,q5,r1,r2,r3,r4,r5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&num);

    q1 = num/8;
    r1 = num%8;


    
    q2 = q1/8;
    r2 = q1%8;


    q3 = q2/8;
    r3 = q2%8;

 

    q4 = q3/8;
    r4 = q3%8;



    q5 = q4/8;
    r5 = q4%8;


    printf("In octal your number is: %1d%1d%1d%1d%1d\n",r5,r4,r3,r2,r1);



    return 0;

}
