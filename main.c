#include <stdio.h>
#include "my_mat.h"
#include <limits.h>

#include "my_mat.h"
#include <stdio.h>
#include <limits.h>

void inputmatrix(int arr[10][10]){
//takr data from the clain
   for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
         scanf("%d", &arr[i][j]);
         }
    }

//update all the zero to a big number to not disturb the algorithm
   for(int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
         if(arr[i][j] == 0){
            if(i != j){
               arr[i][j] = (int)(INT_MAX)/3;
                    }
                }
            }
        }
  //calcualte the shortroad buy floyd algorithm
   for(int k = 0; k < 10; k++){
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    int min = arr[i][j];
                    if (arr[i][k]+arr[k][j] < min){
                        min = arr[i][k]+arr[k][j];
                    }
                    arr[i][j] = min;
                }
            }
        }   
    }
    
int isroad(int arr[10][10]){
  int i;
  int j;
  scanf("%d", &i);
  scanf("%d", &j);
  if(i == j){
    return 0;
    }
  if(arr[i][j] < 3500){
    return 1;
  }
  return 0;
} 

int shortroad(int arr[10][10]){
  int i,j;
  scanf("%d", &i);
  scanf("%d", &j);
  if(i == j){
    return -1;
    }
  else if(arr[i][j] < 3500){
    return arr[i][j];
    }
  return -1;
}   


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