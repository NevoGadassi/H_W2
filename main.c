#include <stdio.h>
#include "my_mat.h"
#include <limits.h>


int main(int argc, char **argv)
{
   char choose;
   int arr[10][10];
   scanf("%c", &choose);
   while(choose != 'D'){
    switch (choose)
    {
    case 'A':
        inputmatrix(arr);
       scanf(" %c", &choose);
        break;
    
    case 'B':
        int ans = isroad(arr);
       if(ans == 1){
         printf("True");
         printf("\n");
       }
        else if(ans == 0){
         printf("False");
         printf("\n");
        }
       scanf(" %c", &choose);
        break;
    case 'C':
         int answer = shortroad(arr);
       printf("%d", choose);
       printf("\n");
       scanf(" %c", &choose);
       break;
    }
   }
}