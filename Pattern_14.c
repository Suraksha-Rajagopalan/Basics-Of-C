#include <stdio.h> 
// In C when char is added with int, ASCII values is used
void main()  {     
    int i,j,charVal='A';      
    for(i=5;i>=1;i--)      {          
        for(j=0;j< i;j++)             
        printf("%c ",(charVal+j));          
        printf("\n");      } }  
