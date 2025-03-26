//Author:Liya BInu
//Date:26-3-2025
//program to find the power of a number using recursion
#include <stdio.h>
int power(int n1,int n2){
 if(n2==0){
 return 1;
 }
 else{
 return n1*power(n1,n2-1);
 }
 }
 int main(){
 int n1,n2;
 printf("enter a number");
 scanf("%d",&n1);
 printf("enter the power of the number");
 scanf("%d",&n2);
 printf("\nresult is %d",power(n1,n2));
 return 0;
 }
