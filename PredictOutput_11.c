#include <stdio.h>
//Here the value of i as initiated as -5, satisfies the while loop condition and follows the else part of the loop until the value of i becomes 0
//When i=0, the if condition gets executed which breaks the while loop and hence the given program doesn't execute anything.
int main(){
    int i = -5;      
    while (i <= 5)      {         
        if (i >= 0)  {           
            break;    }
                 
        else         {             
            i++;             
            continue;          }          
            printf("C Prog");      }  
    return 0; 
    
}
