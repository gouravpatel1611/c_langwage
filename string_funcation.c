#include<stdio.h>
#include <string.h>

// strcat()
// strlen()
// strrev()
// strcpy(s2, s1); s1 ko s2 me copy karega
// strcmp()

int main(){

    char s1[] = "gourav ";
    char s2[] = "gourav";
    char s3[50];

    // puts(strcat(s1,s2));
    // printf("the length of s1 is %d",strlen(s1));
    // printf("\n");
    // puts(strrev(s1));
    // printf("\n");
    // strcpy(s3, strcat(s1,s2));
    // puts(s3);

    printf("the value of s1 s2 is %d",strcmp(s1,s2));
    printf("\n");








 return 0;
}