#include<stdio.h>
#include <string.h>


struct Traval_agency
{
    char name[15];
    int age;
    int licence_no;
    int meter;
    

}driver1,driver2,driver3;


int main(){


    printf("~~ Welcome To Gourav travel agency ~~");
    printf("\n");
    printf("\n");
    printf("Fill driver1 details here :-");
    printf("\n");
    printf("\n");
    printf("\t Name(without space ):- ");
    scanf("%s",&driver1.name);
    printf("\n");
    printf("\t Age:- ");
    scanf("%i",&driver1.age);
    printf("\n");
    printf("\t Licence No. :- ");
    scanf("%i\10",&driver1.licence_no);
    printf("\n");
    printf("\t Driven experince in mater:-  ");
    scanf("%i",&driver1.meter);
    printf("\n");


    printf("Fill driver2 details here :-");
    printf("\n");
    printf("\n");
    printf("\t Name(without space ):- ");
    scanf("%s",driver2.name);
    printf("\n");
    printf("\t Age:- ");
    scanf("%i",&driver2.age);
    printf("\n");
    printf("\t Licence No. :- ");
    scanf("%i",&driver2.licence_no);
    printf("\n");
    printf("\t Driven experince in mater:-  ");
    scanf("%i",&driver2.meter);
    printf("\n");



    printf("Fill driver2 details here :-");
    printf("\n");
    printf("\n");
    printf("\t Name(without space ):- ");
    scanf("%s",driver3.name);
    printf("\n");
    printf("\t Age:- ");
    scanf("%i",&driver3.age);
    printf("\n");
    printf("\t Licence No. :- ");
    scanf("%i",&driver3.licence_no);
    printf("\n");
    printf("\t Driven experince in mater:-  ");
    scanf("%i",&driver3.meter);
    printf("\n");

    // printf("Please enter name : ");                      snak_case_wrting
    // scanf("%s", person.name);                            camalCaseWriting
    // printf("Please enter age : ");                       kabaab-case-writing
    // scanf("%i", &person.age);
    // printf("Please enter ID_Num : ");
    // scanf("%i", &person.ID_Num);


    // printf("The age is %i\nThe ID_Num is %i\nThe name is %s\n",person.age, person.ID_Num,person.name);


    printf("No. \t"); printf("Name \t"); printf("Age \t"); printf("Licence \t"); printf("meter \t");  
    printf("\n");
    printf("1. \t"); printf("%s \t",driver1.name); printf("%d \t",driver1.age); printf("%d \t",driver1.licence_no); printf("\t %d ", driver1.meter); 
    printf("\n");
    printf("2. \t"); printf("%s \t",driver2.name); printf("%d \t",driver2.age); printf("%d \t",driver2.licence_no); printf("\t %d", driver2.meter); 
    printf("\n");
    printf("3. \t"); printf("%s \t",driver3.name); printf("%d \t",driver1.age); printf("%d \t",driver1.licence_no); printf("\t %d ", driver1.meter); 
    printf("\n");

 return 0;
}