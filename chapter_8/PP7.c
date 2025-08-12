#include <stdio.h>

int main(void){
    int sum = 0 , table[5][5];
    for(int i = 0 ; i < 5 ; i++ ){
        printf("Enter row %d: ",(i+1));
        for(int j = 0 ; j < 5 ; j++){
            scanf("%d",&table[i][j] );
        }
        //scanf(" %d %d %d %d %d",&table[i][0],&table[i][1],&table[i][2],&table[i][3],&table[i][4]);
    }

    printf("Row totals: ");
    for(int i = 0 ; i < 5 ; i++ ){
        sum = 0;
        for(int j = 0 ; j <5 ; j++){
            sum += table[i][j];
        }
        printf("%d ",sum);
    }

    printf("\nColumn totals: ");
    for(int i = 0 ; i < 5 ; i++ ){
        sum = 0;
        for(int j = 0 ; j <5 ; j++){
            sum += table[j][i];
        }
        printf("%d ",sum);
    }
    printf("\n");
    return 0;
    
}