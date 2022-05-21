#include <stdio.h>
//Here the 2 cases ('a'||1) and ('b'||2) are considered to be true and hence we will get a error
// error: duplicate case value; the only way to fix it is giving two different case values
int main(){
    char check = 'a';          
    switch (check)      {          
        case ('a'||1): 
        printf("Geeks ");
        break;          
        case ('b'||2): 
        printf("Quiz ");                     
        break;          
        default: printf("GeeksQuiz");      }  

    return 0; 
    
}
