//Liya Binu
//07-04-2025
//Program to add two complex numbers
#include <stdio.h>
typedef struct{
float real;
float image;
}complex;
complex add(complex a,complex b){
complex result;
result.real=a.real+b.real;
result.image=a.image+b.image;
return result;
}
int main(){
complex a,b,result;
printf("\n Enter the real and imaginary part of first number:");
scanf("%f%f",&a.real,&a.image);
printf("\n Enter the real and imaginary part of the second number:");
scanf("%f%f",&b.real,&b.image);
result=add(a,b);
printf("Result is %f+i%f",result.real,result.image);
return 0;
}
