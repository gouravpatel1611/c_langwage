#include<stdio.h>


void value_add(int a, int b){
    int temp = a;
    a = a + b;
    b = a - b;
}
void ref_add(int* a , int* b){
    int temp = *a;
    *a = *a +*b;
    *b = temp - *b;
}

int main(){
    int x =10, y=8;
    printf("value of a is  %d and value of b is %d",x,y);
    printf("\n");
    value_add(x,y);
    printf("\n");
    printf("value of a is  %d and value of b is %d",x,y);
    printf("\n");
    ref_add(&x,&y);
    printf("\n");
    printf("value of a is  %d and value of b is %d",x,y);
    printf("\n");









 return 0;
}