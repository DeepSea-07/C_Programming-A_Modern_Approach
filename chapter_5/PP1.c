#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(0<num && num<9){printf("The number %d is 1 digit\n",num); return 0;}
    else if(num<99){printf("The number %d is 2 digits\n",num); return 0;}
    else if(num<999){printf("The number %d is 3 digits\n",num); return 0;}
    else if(num<9999){printf("The number %d is 4 digits\n",num); return 0;}
    
}