#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int random(){
    srand(time(NULL));
    return rand()%3 ;
}

int main(){

    char name[25];
    int value;
    int win = 0;

    printf("~~ Welcome To Game ~~");
    printf("\n");
    printf("\t Enter Your name :-  ");
    gets(name);
    printf("\n");
    printf("Rule :- ");
    printf("\n");
    printf("\t Select 0 for Rock ");
    printf("\n");
    printf("\t Select 1 for Sejar ");
    printf("\n");
    printf("'\t Select 2 for Paper ");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\t  ~~ Round %d ~~",i+1);
        printf("\n");
        printf("Your Chois :- ");
        scanf("%d",&value);
        printf("\n");

         switch (value)
        {
        case 0:
            printf("%s :-\tRock ",name);
            break;
        case 1:
            printf("%s :-\tSejar ",name);
            break;
        case 2:
            printf("%s :-\tPaper ",name);
            break;
        
        default:
        printf("Input Error !!");
            break;
        }

        printf("\n");
        switch (random())
        {
        case 0:
            printf("Computer :-\tRock ");
            break;
        case 1:
            printf("Computer :-\tSejar ");
            break;
        case 2:
            printf("Computer :-\tPaper ");
            break;
        
        default:
        printf("Sarver Error !!");
            break;
        }
        printf("\n");

        //result par round

        if (value == 0)
        {
            if (random() == 0)
            {
                printf("**Match Tai**");
            }
            else if(random() == 1)
            {
                printf("** %s is Winner**",name);
                win++;
            }
            else if(random() == 2)
                printf("**Computar is Winner**");
                win--;
            {
            }
            
            
        }


        if (value == 1)
        {
            if (random() == 1)
            {
                printf("**Match Tai**");
            }
            else if(random() == 2)
            {
                printf("** %s is Winner**",name);
                win++;
            }
            else if(random() == 0)
                printf("**Computar is Winner**");
                win--;
            {
            }
            
            
        }


        if (value == 2)
        {
            if (random() == 2)
            {
                printf("**Match Tai**");
            }
            else if(random() == 0)
            {
                printf("** %s is Winner**",name);
                win++;
            }
            else if(random() == 1)
                printf("**Computar is Winner**");
                win--;
            {
            }
            
            
        }





      

        printf("\n");
    }
    
    // result  printf("\n");
        if (win == 0)
        {
            printf("Final Match is Taii !!");
        }
        
        else if (win >0)
        {
            printf("Final Match Winner is %s",name);
            printf("\n");
            printf("%s point %d",name,win);
            printf("\n");
            printf("Computer point %d",3-win);

        }
        
        else if (win <0)
        {
            printf("Final Match Winner is Computer");
            printf("\n");
            printf("%s point %d",name,3+win);
            printf("\n");
            printf("Computer point %d",-1*win);
        }
        

 printf("\n");
 return 0;
}