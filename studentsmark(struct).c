//Liya Binu
//02-04-2025
//program to collect mark details of students and calculate the total average mark of all subjects
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
float totalmark=0,avgmark;
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
totalmark=totalmark+s[i].mark1+s[i].mark2+s[i].mark3;
}
printf("\nThe student details:");
for(int i=0;i<n;i++){
printf("\nName:%s",s[i].name);
printf("\nRollNo:%d",s[i].rollNo);
printf("\nmark1:%f",s[i].mark1);
printf("\nmark2:%f",s[i].mark2);
printf("\nmark3:%f",s[i].mark3);
}
printf("\ntotalmark:%f",totalmark);
avgmark=totalmark/n;
printf("\navarage mark:%f",avgmark);
return 0;
}
