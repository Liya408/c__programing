#include<stdio.h>
int main(){
  int limit,i,smallest,largest,minPos,maxPos;
  printf("\nenter the limit");
  scanf("%d",&limit);
  int num[limit];
  printf("\nenter the %d numbers",limit);
  for(i=0;i<limit;i++){
    scanf("%d",&num[i]);}
    largest=num[0];
    smallest=num[0];
  for(i=0;i<limit;i++){
    if(largest<num[i]){
      largest=num[i];
      maxPos=i+1;
    }
    if(smallest>num[i]){
      smallest=num[i];
      minPos=i+1;
    }
    }
  printf("\nlargest num is %d,smallest num is%d",largest,smallest);
  printf("\nposition of largest is %d,smallest is %d",maxPos,minPos);
  return 0;
  }
