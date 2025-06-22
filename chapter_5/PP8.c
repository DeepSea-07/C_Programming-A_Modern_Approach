#include <stdio.h>

int main(void)
{
    int hr , min , total_min, part ,left , right ,departure , arrival;
    printf("Enter a 24-hour time : ");
    scanf("%d :%d",&hr,&min);
    total_min = (hr * 60) + min ;

    if ( total_min < (8*60)){
        part = 1 ;
    }
    else if (total_min < (9* 60 + 43)){
        left = total_min - (8*60);
        right = (9*60+43) - total_min;
        part = (left >right ? 2 : 1);
    }

    else if (total_min < (11* 60 + 19)){
        left = total_min - (9*60+43);
        right = (11*60+19) - total_min;
        part = (left >right ? 3 : 2);
    }
    else if (total_min < (12* 60 + 47)){
        left = total_min - (11*60+19);
        right = (12*60+47) - total_min;
        part = (left >right ? 4 : 3);
    }
    else if (total_min < (14 * 60 )){
        left = total_min - (12*60+ 47);
        right = (14*60) - total_min;
        part = (left >right ? 5 : 4);
    }
    else if (total_min < (15* 60 + 45)){
        left = total_min - (14*60);
        right = (15*60+45) - total_min;
        part = (left >right ? 6 : 5);
    }
    else if (total_min < (19* 60 )){
        left = total_min - (15*60+45);
        right = (19*60) - total_min;
        part = (left >right ? 7 : 6);
    }
    else if (total_min < (21 * 60 + 45)){
        left = total_min - (19 * 60);
        right = (21*60+45) - total_min;
        part = (left >right ? 8 : 7);
    }

    switch (part) {
        case 1 : printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n "); break;
        case 2 : printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n "); break;
        case 3 : printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.\n "); break;
        case 4 : printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.\n "); break;
        case 5 : printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.\n "); break;
        case 6 : printf("Closest departure time is 3:45 p.m., arriving at 05:55 p.m.\n "); break;
        case 7 : printf("Closest departure time is 07:00 p.m., arriving at 09:20 p.m.\n "); break;
        case 8 : printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.\n "); break;

    }

    return 0; 
}