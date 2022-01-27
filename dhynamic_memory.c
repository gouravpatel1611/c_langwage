#include<stdio.h>
#include <stdlib.h>



int main(){

    int num;
    printf("Enter the size off array you want to create:- ");
    scanf("%d",&num);


    // // use of mallloc
    // int* ptr;
    // ptr = (int*) malloc(num*sizeof(int));


    // Use of calloc
    int* ptr;
    ptr = (int*) calloc(num,sizeof(int));


    for (int i = 0; i < num; i++)
    {   
        printf("Enter the value no %d of this array :-  ",i);
        scanf("%d",&ptr[i]);
        printf("\n");
    }

    for (int i = 0; i < num; i++ )
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
      


    printf("Enter the size off new  array you want to create:- ");
    scanf("%d",&num);
       // use of realloc
    ptr = (int*) realloc(ptr, num*sizeof(int));

    for (int i = 0; i < num; i++)
    {   
        printf("Enter the value no %d of this array :-  ",i);
        scanf("%d",&ptr[i]);
        printf("\n");
    }

    for (int i = 0; i < num; i++ )
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    

    free(ptr);





    printf("\n");
 return 0;
}