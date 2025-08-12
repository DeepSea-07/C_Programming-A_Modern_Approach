#include <stdio.h>
#define N ((int) sizeof(a)/sizeof(a[0])) 

int main(void){
    int number;
    printf("How many numbers do you want to Enter : ");
    scanf(" %d",&number);

    

    int a[number], i;

    

    printf("Enter %ld numbers: ", N );

    for (i = 0; i < N; i++){
        scanf ("%d", &a[i]);
    }
    printf ("In reverse order:");
    for (i = N-1 ; i >= 0; i--){
        printf(" %d", a[i]);
    }
    printf("\n");
return 0;
}