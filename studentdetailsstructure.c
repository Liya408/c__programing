//Liya Binu
//02-04-2025
//program to get student details using structure
#include <stdio.h>
struct student{
int rollNo;
char name[20];
float cgpa;
};
int main(){
struct student s1;
printf("\n enter the roll number;");
scanf("%d",&s1.rollNo);
printf("\nenter the name;");
scanf("%s",s1.name);
printf("\nenter the cgpa");
scanf("%f",&s1.cgpa);
printf("\nThe student details;");
printf("\nName%s",s1.name);
printf("\nRollNO%d",s1.rollNo);
printf("\ncgpa%f",s1.cgpa);
return 0;
}
