#include<stdio.h>


int main(){

    int m1,n1,m2,n2;
    // for matrix 1
    printf("\t ~~ Welcome To Matrix Multiply ~~");
    printf("\n");
    printf("Enter Number of Row for matrix 1 :- ");
    scanf("%d",&m1);
    printf("\n");
    printf("Enter Number of Culam for matrix 1 :- ");
    scanf("%d",&n1);
    printf("\n");
    
    int meta1[m1][n1];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("Enter Value for matrix-1[%d][%d] :-  ",i+1,j+1);
            scanf("%d",&meta1[i][j]);
        }
    }
    
    printf("\n");
    printf("given matrix 1 :- ");
    printf("\n");
    printf("\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("\t %d",meta1[i][j]);
        }
        printf("\n");
    }
    



    // for matrix2
    printf("Enter Number of row for matrix 2 :- ");
    scanf("%d",&m2);
    printf("\n");
    printf("Enter Number of Culam for matrix 2 :- ");
    scanf("%d",&n2);
    printf("\n");
    
    int meta2[m2][n2];
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Enter Value for matrix-1[%d][%d] :-  ",i+1,j+1);
            scanf("%d",&meta2[i][j]);
        }
    }
    
    printf("\n");
    printf("given matrix 2 :- ");
    printf("\n");
    printf("\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("\t %d",meta2[i][j]);
        }
        printf("\n");
    }


    // matrix result

    if (n1 == m2)
    {
        
    

    printf("Result matrix :- ");
    printf("\n");
    int value =0;

    for (int i = 0; i < m1; i++)
    {
        int row[n1];
        int colum[m2];
       for (int j = 0; j < n1; j++)
       {
           row[j]=meta1[i][j];
       }


       for (int k = 0; k < n2; k++)
       {
           for (int l = 0; l < m2; l++)
           {
               colum[l] = meta2[l][k];
           }
           
           for (int l = 0; l < m2; l++)
           {
               value = value + row[l]*colum[l];
           }
           printf("\t %d",value);
           value =0;
       }
       printf("\n");
    }
    }

    else{
        printf("This Matrix can't multyplide  ");
    }
    printf("\n");
    









 return 0;
}