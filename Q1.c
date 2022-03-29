#include <stdio.h>

/*Write a C Program to calculate the volume of a pool.
 The equation for determining the volume is 
*/

int main(){
int length,breadth,width,volume;  
printf("enter a number:");    
scanf("%d%d%d",&length,&breadth,&width);    
volume=length*width*breadth;
printf("volume of pool is: %d ",volume);    
return 0;  
}
