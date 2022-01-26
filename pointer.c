#include<stdio.h>


int main(){

    int a = 16;
    int* ptr = &a;
    int* ptr2 = NULL;

    printf("the value of a is %d ",a);
    printf("\n");
    printf("the value of a is %d ",&a);
    printf("\n");
    printf("the value of a is %d ",ptr);
    printf("\n");
    printf("the value of a is %x ",ptr);
    printf("\n");
    printf("the value of a is %d ",*ptr);
    printf("\n");
    printf("the value of a is %d ",*ptr);
    printf("\n");
    printf("the value of a is %d ",ptr2);
    printf("\n");







 return 0;
}