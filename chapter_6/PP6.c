#include <stdio.h>

int main(void)
{ 
    int number ;
    printf("Enter the number till you want the even number to be squared : ");
    scanf("%d",&number);

    for(int  i = 2 ; i <= number ; i += 2){
        printf("%d\n",i*i);
    }
    return 0;
 

}
