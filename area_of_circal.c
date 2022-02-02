#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define PI 3.142857

float radius(float x1, float y1, float x2, float y2){
    return sqrtf((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

void area( float (*rad) (float, float,float,float),float x1, float y1, float x2, float y2){
    float r = (*rad)(x1,y1,x2,y2);
    printf("The area is :- %f",PI*r*r);
    printf("\n");
}
void perimeter( float (*rad) (float, float,float,float),float x1, float y1, float x2, float y2){
    float r = (*rad)(x1,y1,x2,y2);
    printf("The area is :- %f",PI*2*r);
    printf("\n");
}

int main(){

    float (*rad) (float, float,float,float);
    rad = radius;
    float x1,y1,x2,y2;
    float result;


    printf("Input Values :- ");
    printf("\n");
    printf(" \t x1 :- ");
    scanf("%f",&x1);
    printf("\n");
    printf(" \t y1 :- ");
    scanf("%f",&y1);
    printf("\n");
    printf(" \t x2 :- ");
    scanf("%f",&x2);
    printf("\n");
    printf(" \t y2 :- ");
    scanf("%f",&y2);
    printf("\n");

    int value;

    printf("Select  0 for area and 1 for perimeter => ");
    printf("\n");
    printf("\t Input :- ");
    scanf("%d",&value);

    if (value ==0)
    {
    area(rad, x1,y1,x2,y2);
    }
    else if (value ==1)
    {
    perimeter(rad, x1,y1,x2,y2);
    }
    else{
        printf("Wrong Inputs !!!!");
    }
    





 return 0;
}