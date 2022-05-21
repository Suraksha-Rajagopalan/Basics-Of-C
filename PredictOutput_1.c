#include <stdio.h>
// the output of the following code is 1 as running the loop the second time will evaluate the expression in the while condition as zero.
int main(){
    { 
    int i=2,j=2; 
    while(i+1?--i:j++)   {        
        printf("%d",i);  }
    return 0; 
    
}
  
