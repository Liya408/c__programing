#include <stdio.h>
void readfile(FILE *fp1){
int num;
while(fscanf(fp1,"%d",&num)==1){
  printf("\t%d\t",num);
  }
  fclose(fp1);
  }
int main(){
 FILE *fp1,*fp2,*fp3;
 fp1=fopen("number.txt","r");
 fp2=fopen("odd.txt","w");
 fp3=fopen("even.txt","w");
 int num;
  while(fscanf(fp1,"%d",&num)==1){
    if(num %2==0){
      fprintf(fp3,"%d\t",num);
      }
    else{
    fprintf(fp2,"%d\t",num);
    }
  }
 fclose(fp1);
 fclose(fp2);
 fclose(fp3);
 printf("\ninput text file contents:");
 fp1=fopen("number.txt","r");
 readfile(fp1);
 printf("\n the odd number contents");
 fp2=fopen("odd.txt","r");
 readfile(fp2);
 printf("\n the even bumber contents");
 fp3=fopen("even.txt","r");
readfile(fp3);
return 0;
}
 
