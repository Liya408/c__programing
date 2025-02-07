//Author:Liya Binu
//date:7-2-2025
//programe to find the transpose of a matrix using 2-D array


#include<stdio.h>
int main(){
  int row,col;
  printf("enter the row and column of matrix");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  printf("enter the elements of matrix");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
      }
    }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
      }
      printf("\n");
    }
  printf("transpose matrix");
  printf("\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix[j][i]);
      }
      printf("\n");
    }
  return 0;
  }
