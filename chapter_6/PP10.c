#include <stdio.h>

int main(void)
{
    int m1 , m2 , em , d1 ,d2, ed , y1 , y2 , ey ;
    
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d",&m1,&d1,&y1);

    if(m1 == 0 && d1 == 0 && y1 ==0 ) { return 0;}

    em = m1;
    ed = d1 ;
    ey = y1 ;

    for(;;){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d",&m1,&d1,&y1);

        if(m1 == 0 && d1 == 0 && y1 ==0 ) { break;}

        if (y1 != ey){

            if (y1 < ey) {
                ey =y1 ;
                ed = d1 ;
                em = m1 ;
                continue;
            }
        }
        else if (m1 != em){
            if (m1 < em){
                ey = y1 ;
                ed = d1 ;
                em =m1 ;
            }
        }

        else if (d1 != ed){
            if (d1 < ed){
                ey = y1 ;
                ed = d1 ;
                em =m1 ;
            }
        }



    }

    printf("%d/%d/%02d is the earliest date\n",em,ed,ey);
    return 0;
}