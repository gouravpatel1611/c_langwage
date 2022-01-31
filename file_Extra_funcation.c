#include<stdio.h>

// fputc
// fputs
// fgetc
// fgets

//r
//a
//w
// r+
// a+
// w+
int main(){

FILE* ptr = NULL;
ptr = fopen("demo.txt","r");



// char c = fgetc(ptr);
// printf("The character I was read :- %c ",c);
// printf("\n");
//  c = fgetc(ptr);
// printf("The character I was read :- %c ",c);
// printf("\n");
//  c = fgetc(ptr);
// printf("The character I was read :- %c ",c);
// printf("\n");
//  c = fgetc(ptr);
// printf("The character I was read :- %c ",c);
// printf("\n");

char str[10];
fgets(str,10,ptr);
printf("The string is %s",str);
printf("\n");






    fclose(ptr);
    printf("\n");
 return 0;
}