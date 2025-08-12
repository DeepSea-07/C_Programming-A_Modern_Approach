#include <stdio.h>
#define STUDENT 5
#define QUIZ_GRADES 5

int main(void){
    int sum = 0 , table[STUDENT][QUIZ_GRADES] , high_score , low_score;

    for(int i = 0 ; i < STUDENT ; i++ ){
        printf("Enter row %d: ",(i+1));
        for(int j = 0 ; j < QUIZ_GRADES ; j++){
            scanf("%d",&table[i][j] );
        }
        //scanf(" %d %d %d %d %d",&table[i][0],&table[i][1],&table[i][2],&table[i][3],&table[i][4]);
    }

    for(int i = 0 ; i < STUDENT ; i++ ){
        printf("\nAverage Score for Student %d: ",i+1);
        sum = 0;
        for(int j = 0 ; j <QUIZ_GRADES ; j++){
            sum += table[i][j];
        }
        printf("%.2f ",((float) sum /QUIZ_GRADES));
    }

    
    for(int i = 0 ; i < QUIZ_GRADES ; i++ ){
        printf("\n\nAverage Score of Quiz %d: ",i+1);
        sum = 0;
        high_score = 0 ;
        low_score = 100 ; 
        for(int j = 0 ; j <STUDENT ; j++){
            sum += table[j][i];
            high_score = (high_score > table[j][i]) ? high_score : table[j][i] ;
            low_score =  (low_score  < table[j][i]) ? low_score  : table[j][i] ;
        }
        printf("%.2f ",((float)sum/STUDENT));
        printf("\nHigh Score: %d\n",high_score);
        printf("Low Score: %d\n",low_score);
    }
    printf("\n");
    return 0;
    
}