//Liya Binu
//02-04-2025
//program to get the details of n students using structure
#include<stdio.h>
typedef struct{
int rollNo;
char name[20];
float cgpa;
}student;
int main(){
int n;
printf("enter the number of students");
scanf("%d",&n);
student s[n];
for(int i=0;i<n;i++){
printf("\n enter the roll number:");
scanf("%d",&s[i].rollNo);
printf("\nenter the name:");
scanf("%s",s[i].name);
printf("\nenter the cgpa:");
scanf("%f",&s[i].cgpa);
}
printf("\nThe student details:");
for(int i=0;i<n;i++){
printf("\nName:%s",s[i].name);
printf("\nRollNo:%d",s[i].rollNo);
printf("\ncgpa:%f",s[i].cgpa);
}
return 0;
}
