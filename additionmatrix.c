#include<stdio.h>
int main(){
  int row,col;
  printf("enter the row");
  scanf("%d",&row);
  printf("enter the number of columns");
  scanf("%d",&col);
  int matrix1[row][col],matrix2[row][col],matrix3[row][col];
  printf("\nenter the elements of first matrix");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix1[i][j]);
      }
    }
  printf("\nenter the elements of second matrix");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix2[i][j]);
      }
    }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
      }
    }
  printf("first matrix");
  printf("\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix1[i][j]);
      }
      printf("\n");
    }
  printf("second matrix");
  printf("\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix2[i][j]);
      }
      printf("\n");
    }
  printf("matrix1+matrix2is=");
  printf("\n");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix3[i][j]);
      }
      printf("\n");
    }
  return 0;
  }
