//Author:Liya BInu
//Date:26-3-2025
//program to find area of circle and cylinder using macro
#include <stdio.h>

#define pi 3.14
#define square(r) r*r

int main(){
int r,h;
printf("enter the radius of the circle");
scanf("%d",&r);
printf("enter the height");
scanf("%d",&h);
printf("area of the circle is %f",pi*square(r));
printf("\narea of cylinder is %f",2*pi*r*r+h); 
return 0;
}



