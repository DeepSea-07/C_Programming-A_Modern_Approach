#include <stdio.h>

int main(void){
    int size , row , column , count = 1;
    printf("This program creates a magic square of a specified size. \nThe size must be an odd number between 1 and 99. \nEnter size of magic square: ");
    scanf("%d",&size);
    int magic[size][size];
    int previous[2];

    for(int i = 0 ; i< size ; i++){
        for(int j = 0 ; j < size ; j++){
            magic[i][j]=0;
        }
    }


    row = 0 ;
    column = (size - 1) / 2 ;
    magic[row][column]=1;

    printf("\n");
    while(count <= (size*size)){

        previous[0] = row , previous[1] = column ; 

        row = (row == 0) ? (size - 1) : (row -1 ) ;
        column = column < (size-1) ? column + 1 : 0 ;

        if(magic[row][column] != 0){
            row = previous[0] + 1 ;
            column = previous[1];
        }

        magic[row][column]=++count;

    }

    for(int i = 0 ; i< size ; i++){
        for(int j = 0 ; j < size ; j++){
            printf("%4d ",magic[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;




    
}