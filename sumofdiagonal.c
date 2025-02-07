#include<stdio.h>
int main(){
  int row,col;
  printf("enter the row");
  scanf("%d",&row);
  printf("enter the number of columns");
  scanf("%d",&col);
  int matrix[row][col];
  printf("enter the elements of matrix");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
      }
    }
  int sum=0;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(i==j){
        sum=sum+matrix[i][j];
        }
      }
    }
    printf("sum of diagonal elements=%d",sum);
    return 0;
    }
  
