#include <stdio.h>


int main() {
   int n = 43;
   int arr[100];
   
   for (int i = 0; i < n; i++)
   {
       if (i ==0)
       {
           arr[0] = 0;
       }
       else if (i == 1)
       {
           arr[1] = 1;
       }
       else
       {
           arr[i] = arr[i-2] + arr[i-1];
       } 
   }
   
   for (int i = 0; i < n; i++)
   {
       printf("%d  ",arr[i]);
   }
   
   
	

}