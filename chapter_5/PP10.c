#include <stdio.h>

int main(void){
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d",&grade);

    if(grade>100 || grade < 0) {printf("Enter a valid grade\n"); return 0; }

    if(grade==100) { printf("Letter grade: A\n"); return 0;}
    int tens = grade / 10;

    printf("Letter grade: ");
    switch (tens){
    case 9 : printf("A\n"); return 0;
    case 8 : printf("B\n"); return 0;
    case 7 : printf("C\n"); return 0;
    case 6 : printf("D\n"); return 0;
    default : printf("F\n"); return 0;
    }
}