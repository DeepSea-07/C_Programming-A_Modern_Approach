#include <stdio.h>

int main(void){
    int d1,d2,m1,m2,y1,y2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d",&m1,&d1,&y1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d",&m2,&d2,&y2);

    if (y1 != y2){
        int y_min = ( y1 < y2 ? y1 : y2);
        if(y_min == y1) printf("%d/%d/%02d is earlier than %d/%d/%02d\n",m1,d1,y1,m2,d2,y2);
        else printf("%d/%d/%02d is earlier than %d/%d/%02d\n",m2,d2,y2,m1,d1,y1);
        return 0;
    }

    else if (m1 != m2){
        int m_min = ( m1 < m2 ? m1 : m2);
        if(m_min == m1) printf("%d/%d/%02d is earlier than %d/%d/%02d\n",m1,d1,y1,m2,d2,y2);
        else printf("%d/%d/%02d is earlier than %d/%d/%02d\n",m2,d2,y2,m1,d1,y1);
        return 0;
    }

    else if (d1 != d2){
        int d_min = ( d1 < d2 ? d1 : d2);
        if(d_min == d1) printf("%d/%d/%02d is earlier than %d/%d/%02d\n",m1,d1,y1,m2,d2,y2);
        else printf("%d/%d/%02d is earlier than %d/%d/%02d\n",m2,d2,y2,m1,d1,y1);
        return 0;
    }

    else{
        printf("Both date are same\n");
        return 0;
    }
}