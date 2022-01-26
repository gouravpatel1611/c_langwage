#include<stdio.h>


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int* ptr = &arr;

    for (int i = 0; i < 9; i++)
    {
        printf(" value of arry %d is %d",i,arr[i]);
        printf("\n");

    }

    for (int i = 0; i < 9; i++)
    {
        printf("address of arry is %d",*(ptr+i));
        printf("\n");
    }
    
    









 return 0;
}   