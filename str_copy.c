#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = {};
    printf("Enter a string: \n");
    scanf("%s",s);

    char a[100] = {};
    for (int i = 0; s[i] != '\0'; i++){
        a[i] = s[i];
    }
    printf("The copy of the string without function is: %s", a);

    char b[100] = {};
    strcpy(b, s);
    printf("\nThe copy of the string using the function is: %s", b);
    return 0;
}