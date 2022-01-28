#include<stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    int id_len;
    char* emp1 ;
    printf("~~ Wellcome To GRS P.L.C. ~~");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        
    printf("Enter your ID Length:- ");
    scanf("%d",&id_len);
    printf("\n");
    emp1 = (char*) malloc((id_len+1)*sizeof(char));
    printf("Enter your Employ ID:- ");
    scanf("%s",emp1);
    printf("\n");
    printf("YOur Id is :- %s",emp1);
    printf("\n");
    free(emp1);
    }



  






 return 0;
}