#include<stdio.h>



int func1(){
    int a = 0;
    a++;
    return a;
}
int func2(){
    static int a = 0;
    a++;
    return a;
}
int main(){
    

    printf("\n");

    printf("The value of func1 in first time %d",func1());
    printf("\n");
    printf("The value of func1 in shecond time %d",func1());
    printf("\n");
    printf("The value of func1 in third time %d",func1());
    printf("\n");
    printf("The value of func1 in first time %d",func2());
    printf("\n");
    printf("The value of func1 in shecond time %d",func2());
    printf("\n");
    printf("The value of func1 in third time %d",func2());
    printf("\n");








 return 0;
}