#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    bool coordinates_checker[10][10] = {false};
    char coordinates[10][10] = {};
    int x_coord = 0 ;
    int y_coord = 0 ;
    int move ;
    srand((unsigned int) time(NULL));

    coordinates[x_coord][y_coord] = 65 ;
    coordinates_checker[x_coord][y_coord] = true;

    int check = 0 ;

    for(int i = 0 ; i < 25 ; i++ ){

        if(check > 10) {
            printf("I guess your mistake \n");
            break;
        }
        move = (rand()%4);

        if((coordinates_checker[x_coord+1][y_coord] && coordinates_checker[x_coord-1][y_coord] && coordinates_checker[x_coord][y_coord+1] && coordinates_checker[x_coord][y_coord - 1] ) != false ) break;
        
        switch (move)
        {
        case 0:
            if( ((x_coord-1) >= 0) && (coordinates_checker[x_coord-1][y_coord] == false)){
                coordinates[--x_coord][y_coord] = 66 + i ;
                coordinates_checker[x_coord][y_coord] = true;
                check = 0 ;
            }
            else{
                --i;
                check++;
            }
            break;

        case 1:
            if( ((y_coord + 1) < 10 ) && (coordinates_checker[x_coord][y_coord + 1] == false)){
                coordinates[x_coord][++y_coord] = 66 + i ;
                coordinates_checker[x_coord][y_coord] = true;
                check = 0 ;
            }
            else{
                --i;
                check++;
            }
            break;

        case 2:
            if( ((x_coord + 1)  < 10) && (coordinates_checker[x_coord + 1][y_coord] == false)){
                coordinates[++x_coord][y_coord] = 66 + i ;
                coordinates_checker[x_coord][y_coord] = true;
                check = 0 ;
            }
            else{
                --i;
                check++;
            }
            break;

        case 3:
            if( ((y_coord-1) > -1) && (coordinates_checker[x_coord][y_coord - 1] == false)){
                coordinates[x_coord][--y_coord] = 66 + i ;
                coordinates_checker[x_coord][y_coord] = true;
                check = 0 ;
            }
            else{
                --i;
                check++;
            }
            break;

        default:
            
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(coordinates_checker[i][j] == false){
                printf(" . ");
                continue;
            }

            printf(" %c ",coordinates[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");
    
}