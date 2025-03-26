//Author:Liya BInu
//Date:26-3-2025
//program to calculate the sum of array elements by passing the array to a function and display the sum in the main function.
#include <stdio.h>
int sum(int array[],int limit){
int result=0;
for(int i=0;i<limit;i++){
result=result+array[i];
}
return result;
}
int main(){
int i,limit;
printf("enter the limit");
scanf("%d",&limit);
int array[limit];
printf("enter the elements of array");
for(i=0;i<limit;i++){
scanf("%d",&array[i]);
}
printf("sum of the array is %d",sum(array,limit));
return 0;
}



