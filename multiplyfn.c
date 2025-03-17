//Author;Liya Binu
//date:17-03-2025
//program to multiply two numbers with function
#include <stdio.h>
int multiply(int,int);
int main(){
int num1,num2,result;
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
result=multiply(num1,num2);
printf("%d is the answer",result);
return 0;
}
int multiply(int num1,int num2){
int result=num1*num2;
return result;
}
