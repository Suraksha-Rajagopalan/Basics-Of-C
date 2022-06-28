#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = {};
    char a[100] = {};

    printf("Enter a string of upper case: \n");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++){
        a[i] = s[i] + 32;
    }
    
    printf("%s", a);
    return 0;
}