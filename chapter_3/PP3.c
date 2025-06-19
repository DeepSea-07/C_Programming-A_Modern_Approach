#include <stdio.h>

int main(void)
{
    int prefix,identifier,code,number,digit;
    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d",&prefix,&identifier,&code,&number,&digit);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher Code: %d\nItem number: %d\nCheck digit: %d\n",prefix,identifier,code,number,digit);
    
}