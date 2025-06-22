#include <stdio.h>

int main(void)
{
    int knot;
    printf("Enter wind speed (in knots): ");
    scanf("%d",&knot);

    if(knot < 1 ) printf("Description\nCalm\n");
    else if(knot <= 3 ) printf("Description\nLight air\n");
    else if(knot <= 27 ) printf("Description\nBreeze\n");
    else if(knot < 47 ) printf("Description\nGale\n");
    else if(knot < 63 ) printf("Description\nStorm\n");
    else printf("Description\nHurricane\n");
    return 0;
}