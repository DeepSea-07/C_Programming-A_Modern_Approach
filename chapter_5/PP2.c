#include <stdio.h>

int main(void)
{
    int hr , min;
    _Bool flag;
    flag = 0;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d",&hr,&min);
    
    if(hr>=12 && hr < 24 ) flag=1;

    if(hr==24) hr = 00;
    else if(hr >= 13 )  { hr = hr - 12 ; }

    printf("Equivalent 12-hour time: %02d:%02d",hr,min);
    if(flag) printf(" PM\n");
    else (printf(" AM\n"));
    return 0;
}