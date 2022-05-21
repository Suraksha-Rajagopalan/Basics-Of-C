#include <stdio.h>
//Here the while loop runs until the value of the expression is true, or until the value of i is not zero.
//The value of i becomes zero in the second iteration which makes the condition false and hence, the print function gets executed once.
int main(){
    int i,j;            
    i=j=2,3;  
    while(--i&&j++)           {
        printf("%d %d",i,j);}
    return 0; 
    
}
