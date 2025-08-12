#include <stdio.h>
#define LENGTH ((int) sizeof(departure)/sizeof(departure[0]))

int main(void)
{
    int departure[]={480 , 583 , 679 , 767 , 840 , 945 , 1140 , 1305};
    int arrival[]= {616 , 712 , 811 , 900 , 968 , 1075 , 1280 , 1438};
    int hr , min , total_min , i , departure_rank;

    printf("Enter a 24-hour time : ");
    scanf("%d :%d",&hr,&min);
    total_min = (hr * 60) + min ;

    if (total_min < departure[0] ){
        departure_rank = 0;
    }
    else if(total_min >  departure[LENGTH-1]){
        departure_rank = LENGTH-1;
    }
    else{
        for(i = 0 ; i < LENGTH ; i++){
            if(departure[i] > total_min){
            departure_rank = ((total_min - departure[i-1]) < (departure[i]- total_min)) ? i-1 : i ;
            break; 
            }
        }
    }

    printf("Closest departure time is ");

    if( departure[departure_rank] < 780 ){
        if(departure[departure_rank]/60 == 0){
            printf("12:%02d ", departure[departure_rank]%60);
        }
        else{
            printf("%02d:%02d ", departure[departure_rank]/60 , departure[departure_rank]%60);
        }
    } 
    else{
        printf("%02d:%02d ", (departure[departure_rank]/60) - 12 , departure[departure_rank]%60);
    }

    departure[departure_rank] < 720 ? printf("a.m., ") : printf("p.m., ") ;
    printf("arriving at ")  ;

    if( arrival[departure_rank] < 780 ){
        if(arrival[departure_rank]/60 == 0){
            printf("12:%02d ", arrival[departure_rank]%60);
        }
        else{
            printf("%02d:%02d ", arrival[departure_rank]/60 , arrival[departure_rank]%60);
        }
    } 
    else{
        printf("%02d:%02d ", (arrival[departure_rank]/60) - 12 , arrival[departure_rank]%60);
    }

    arrival[departure_rank] < 720 ? printf("a.m.") : printf("p.m.") ;
    printf("\n");
    return 0; 
}