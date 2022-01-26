#include<stdio.h>



void rev_arr(int arry[]){
    int temp[50];
    for (int i = 0; i < 10; i++)
    {
        temp[i]= arry[i];
    }
    for (int i = 0; i < 10; i++)
    {
        arry[i] = temp[9-i];
    }
    
        
}

int main(){
    
    
    // length of arry is :- 
    // int len  = 0;
    int arr[] = {1,2,3,4,5,6,7,8,9,0};

    // printf("size of arr is %d",sizeof(arr));
    // printf("\n");
    // printf("size of 1 int value is %d",sizeof(int));
    // printf("\n");
    // len = sizeof(arr)/sizeof(int);
    // printf("Length of arr is %d",len);
    // printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("  %d",arr[i]);

    }
    printf("\n");
    printf("Funcation called");
    printf("\n");
    rev_arr(arr);
     for (int i = 0; i < 10; i++)
    {
        printf("  %d",arr[i]);

    }
    printf("\n");


 return 0;
}