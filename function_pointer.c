#include<stdio.h>
#include <stdlib.h>


int sum(int a , int b ){
    return a+b;
}

void grate(){
    printf("Good Morning all of you %d");
    printf("\n");
}

int main(){
    printf("The sum of 1 and 2 is %d \n",sum(1,2));
    int (*fptr) (int , int);
    fptr = &sum;

    printf("the sum of 4 and 7 is %d ",(*fptr)(4,7));
    printf("\n");







 return 0;
}