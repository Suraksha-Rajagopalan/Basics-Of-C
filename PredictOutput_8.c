#include <stdio.h>
//Here the output of the code is 0 1 2 1 2 3 2 3 4
//As the values of i, j changes so does i+j
int main(){
   int i,j,k;       
   for(i=0;i<3;i++){          
       for(j=0;j<3;j++){               
           printf("   %d",i+j);     
                 }      }  

    return 0; 
    
}
