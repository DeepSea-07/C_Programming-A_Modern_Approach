#include <stdio.h>

int main(void)
{
    float unit_price;
    int item_number,mm ,yy ,dd ;
    printf("Enter item number: ");
    scanf("%d",&item_number);

    printf("Enter unit price: ");
    scanf("%f",&unit_price);

    printf("Enter purchase date (mm/dd/yyyy):" );
    scanf("%d /%d /%d", &mm,&dd,&yy);

    printf("Item \t\t\t Unit \t\t\t Purchase\n");
    printf("     \t\t\t Price\t\t\t Date\n");
    printf("%d \t\t\t $%7.2f  \t\t %d/%d/%d\n",item_number,unit_price,mm,dd,yy);
}