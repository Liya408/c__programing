//Author;Liya Binu
//date:17-03-2025
//program to check the number is even or not using function

#include<stdio.h>
int iseven(int);
int main(){
int num,check;
printf("enter a number to check");
scanf("%d",&num);
check=iseven(num);
if(check==1){
printf("%d is even",num);
}
else{
printf("%d is not even",num);
}
return 0;
}
int iseven(int num){
if(num%2==0){
return 1;
}
else{
return 0;
}
}


