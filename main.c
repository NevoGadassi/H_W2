#include <stdio.h>
#include "my_mat.h"
#include <limits.h>

int main(int argc, char **argv)
{
      char choose;
   int arr[10][10];
   scanf("%c", &choose);
   while(choose != 'D'){
     if(choose == 'A'){
       inputmatrix(arr);
       scanf(" %c", &choose);
     }
     if(choose == 'B'){
       int answer = isroad(arr);
       if(answer == 1){
         printf("%s", "True");
         printf("\n");
       }
       else if(answer == 0){
         printf("%s", "False");
         printf("\n");
       }
       scanf(" %c", &choose);
     }
     if(choose == 'C'){
       int answer = shortroad(arr);
       printf("%d", answer);
       printf("\n");
       scanf(" %c", &choose);
     }
   }
   return 0;
}