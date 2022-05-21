#include <stdio.h>
//Here the output is nothing 
int main(){
    int c = 5, no = 10;     
    do {         
        no /= c;     
        } while(c--);      
        printf ("%d\n", no); 

    return 0;
}
