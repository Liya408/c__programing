#include<stdio.h>
int main(){
  int i,limit,checknum,num[i];
  printf("Enter the limit:");
  scanf("%d",&limit);
  printf("Enter the %d elements",limit);
  for(i=0;i<limit;i++){
    scanf("%d",&num[i]);
    }
  for(i=0;i<limit;i++){
    printf("%d",num[i]);
    }
  printf("\nEnter the value you want to check");
  scanf("%d",&checknum);
  for(i=0;i<limit;i++){
    if (checknum==num[i]){
    printf("\nthe position is%d",i+1);
    }
    }
  return 0;
  }
