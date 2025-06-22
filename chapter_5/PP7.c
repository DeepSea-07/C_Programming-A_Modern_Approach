#include <stdio.h>

int main(void)
{ 
    int first, second , third , fourth ,smallest , largest , max1 , max2 , small1,small2;
    printf("Enter four integers: ");
    scanf("%d %d %d %d",&first,&second,&third,&fourth);

    if(first>second){
        max1 = first;
        small1 = second;
    }
    else{
        max1 = second;
        small1 = first;
    }

    if(third>fourth){
        max2 = third;
        small2 = fourth;
    }
    else{
        max2 = fourth;
        small2 = third;
    }

    largest = (max1 > max2 ? max1 : max2);
    smallest = (small1 >small2 ? small2 : small1);
    printf("Largest: %d\nSmallest: %d\n",largest,smallest);
    return 0;

}
