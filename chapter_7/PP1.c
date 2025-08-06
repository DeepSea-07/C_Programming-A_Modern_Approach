// Shortest value of n that causes failure if 'i' is int : 46341
// Shortest value of n that causes failure if 'i' is short : 182
// Shortest value of n that causes failure if 'i' is short : (I had to quit the terminal because the largest long int in 64-bit computer is too huge)



/////FOR shortest value of n
/*
#include <stdio.h>

int main(void){
    int i , n , j , k;

    printf("Prints table of square \n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);

     j = 0 ;

    for(i = 1 ; ; i++)
    {
        k=i*i;
        if(k>j){
            printf("%10d      %10d\n", i , i*i);
            j=k;
        }
        else{
            printf("%10d      %10d\n", i , i*i);
            return 0;
        }
    }
     
    return 0;
}

*/


/////FOR shortest value of n if i is short
/*
#include <stdio.h>

int main(void){
    short i ,  j , k;

    printf("Prints table of square \n");
   

     j = 0 ;

    for(i = 1 ; ; i++)
    {
        k=i*i;
        if(k>j){
            printf("%10d      %10d\n", i , i*i);
            j=k;
        }
        else{
            printf("%10d      %10d\n", i , i*i);
            return 0;
        }
    }
     
    return 0;
}

*/



/////FOR shortest value of n if i is long 
#include <stdio.h>

int main(void){
    long i ,  j , k;

    printf("Prints table of square \n");
   

     j = 0 ;

    for(i = 1 ; ; i++)
    {
        k=i*i;
        if(k>j){
            printf("%10ld      %10ld\n", i , i*i);
            j=k;
        }
        else{
            printf("%10ld      %10ld\n", i , i*i);
            return 0;
        }
    }
     
    return 0;
}