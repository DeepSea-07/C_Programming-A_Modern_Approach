#include <stdio.h>

int main(void)
{
    int mm , dd, yy ;
    printf("Enter the date in the formate 'mm/dd/yy' : ");
    scanf("%d /%d /%d",&mm,&dd,&yy);
    printf("You entered the date %.4d/%.2d/%.2d\n",yy,mm,dd);
}