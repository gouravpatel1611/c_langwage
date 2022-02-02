#include<stdio.h>
#include <stdlib.h>

int sum(int a , int b){
    return a+b;
}

void morning(int (*ptr)(int,int)){
    printf("Good morning Dosto");
    printf("\n");
    printf("The value of 6+7 %d",(*ptr)(6,7));
    printf("\n");
}
void night(int (*ptr)(int,int)){
    printf("Good night Dosto");
    printf("\n");
    printf("The value of 5+8=%d",(*ptr)(5,8));
    printf("\n");
}

int main(){
    int (*ptr) (int, int);
    ptr = sum;
    morning(ptr);
    night(ptr);




 return 0;
}