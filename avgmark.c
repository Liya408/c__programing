//Liya Binu
//02-04-2025
//program to collect mark details of students and calculate the average mark of each subject
#include<stdio.h>
typedef struct{
int rollNo;
char name[20];
float mark1;
float mark2;
float mark3;
}student;
int main(){
int n;
float totalmark1=0,totalmark2=0,totalmark3=0,avgmark1,avgmark2,avgmark3;
printf("enter the number of students");
scanf("%d",&n);
student s[n];
for(int i=0;i<n;i++){
printf("\n enter the roll number:");
scanf("%d",&s[i].rollNo);
printf("\nenter the name:");
scanf("%s",s[i].name);
printf("\nenter the mark1:");
scanf("%f",&s[i].mark1);
printf("\nenter the mark2:");
scanf("%f",&s[i].mark2);
printf("\nenter the mark3:");
scanf("%f",&s[i].mark3);
}
for(int i=0;i<n;i++){
totalmark1=totalmark1+s[i].mark1;
totalmark2=totalmark2+s[i].mark2;
totalmark3=totalmark3+s[i].mark3;
}
printf("\nThe student details:");
for(int i=0;i<n;i++){
printf("\nName:%s",s[i].name);
printf("\nRollNo:%d",s[i].rollNo);
printf("\nmark1:%f",s[i].mark1);
printf("\nmark2:%f",s[i].mark2);
printf("\nmark3:%f",s[i].mark3);
}
avgmark1=totalmark1/n;
avgmark2=totalmark2/n;
avgmark3=totalmark3/n;
printf("\navarage mark1:%f",avgmark1);
printf("\navarage mark2:%f",avgmark2);
printf("\navarage mark3:%f",avgmark3);
return 0;
}
