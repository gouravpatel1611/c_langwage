#include<stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

  

    int id_len;
    printf("~~ Wellcome To GRS P.L.C. ~~");
    printf("\n");
    printf("Enter your ID Length:- ");
    scanf("%d",&id_len);
    printf("\n");
    char* emp1 ;
    emp1 = (char*) malloc((id_len+1)*sizeof(char));
    printf("Enter your Employ ID:- ");
    scanf("%s",&emp1);
    printf("\n");

    
    printf("%c",*(&emp1+1));
    printf("\n");
    // for (int i = 0; i < id_len; i++ )
    // {
    //     printf("%d",i);
    // }
    printf("\n");
        






 return 0;
}