/*
AUTHOR: NYAWIRA M COLLINS
REG NO. CT101/G/23728/24
DATE:7 November 2024
TITLE: SCORES
*/
#include <stdio.h>
int main() {
//Declaration and Initialization
int i;
int j;
int scores [2][2] = {{65,92},{35,70}};
//print the elements of the array using a nested loop
     for (i=0;i<2; i++) {
              for (j=0; j<2; j++){
//print the otput
          printf("scores [%d] [%d] =%d\n", i,j, scores[i][j]);
}}
return 0;
}