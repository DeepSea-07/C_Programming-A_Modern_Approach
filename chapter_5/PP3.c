#include <stdio.h>

int main(void)
{
    float value , share , ori_commission, riv_commission;
    int num ; 

    printf("Enter Number of share: ");
    scanf("%d",&num);
    printf("Enter price per share: ");
    scanf("%f",&share);

    value = num * share ;

    if (value < 2500.00f){
        ori_commission = 30.00f + .017f * value ;
    }
    else if (value < 6250.00f){
        ori_commission = 56.00f + .0066f * value;
    }
    else if (value < 20000.00f){
        ori_commission = 76.00f + .0034f * value ;
    }
    else if (value < 50000.00f){
        ori_commission = 100.00f + .0022f * value ;
    }
    else if (value < 500000.00f){
        ori_commission = 155.00f + .0011f * value ;
    }
    else{
        ori_commission = 255.00f + .0009f * value ;
    }

    if (ori_commission < 39.00f ){
        ori_commission = 39.00f;
    }

    printf("Commission by Original Broker: $%.2f  ||  ",ori_commission);

    if (share <  2000){
        riv_commission = 33.03 * share ;
    }
    else{
        riv_commission = 33.02 * share ;
    }

    printf("Commission by Rival Broker: $%.2f\n",riv_commission);

    return 0;
}