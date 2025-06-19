#include <stdio.h>

int main(void)
{
    int mm , dd, yy ;
    printf("Enter the date in the formate 'mm/dd/yy' : ");
    scanf("%d/%d/%d",&mm,&dd,&yy);
    printf("You entered the date %d%02d%02d\n",yy,mm,dd);
}