#include <stdio.h>

/*
Write a program to read the radius of sphere and compute its 
surface area and volume.
*/

int main(){
int radius,volume,area;
scanf("%d",&radius);
volume=4/3*3.14*radius*radius*radius;
area=4*3.14*radius*radius;
printf("volume of the sphere is: %d\n",volume);
printf("surface area of the sphere is: %d\n",area);
return 0;
}
