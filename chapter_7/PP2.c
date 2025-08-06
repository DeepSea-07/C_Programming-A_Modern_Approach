
#include <stdio.h>

int main(void){
    int i , n ;
    char ch;


    printf("This program prints a table of square \n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);

    ch=getchar();
    
    printf("this-%c\n",ch);

    for(i = 1 ; i <=n ; i++)
    {
       printf("%10d%10d\n",i,i*i);
       

       if(i%24==0)
       {
        printf("Press Enter to Continue...");
        ch = getchar();
        
        
       }
    }
     
    return 0;
}


