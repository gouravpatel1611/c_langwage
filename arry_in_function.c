#include<stdio.h>


void change_value(int arry[]){
    arry[0]= 50;
    return 0;
}
void change_value_2(int* ptr){
    *(ptr+1) = 25;
    return 0;
}

int main(){

    int arr[] = {10,15,32,34,26,21,43,12,31,31,41,32,53,13};
    printf("value of arr[0] is %d",arr[0]);
    printf("\n");
    change_value(arr);
    printf("\n");
    printf("value of arr[0] is %d",arr[0]);
    printf("\n");
    printf("value of arr[1] is %d",arr[1]);
    printf("\n");
    change_value_2(arr);
    printf("\n");
    printf("value of arr[1] is %d",arr[1]);
    printf("\n");






 return 0;
}