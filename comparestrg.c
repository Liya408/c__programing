/*Author:liya binu
date:19-02-2025
program:to reverse a string*/
#include<stdio.h>
#include<string.h>
int main(){
  char str1[50],str2[50];
  printf("\nEnter string 1");
  fgets(str1,sizeof(str1),stdin);
  printf("\nEnter the string2");
  fgets(str2,sizeof(str2),stdin);
  
  if (strcmp(str1,str2)==0){
    printf("strings are equal");
    }
  else{
    printf("strings are not equal");
    }
  return 0;
  }

  
