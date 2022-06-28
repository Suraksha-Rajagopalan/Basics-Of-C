#include <stdio.h>
#include <ctype.h>

int main(){
    char a[100] = {};
    printf("Enter the string: \n");
    scanf("%s",a);

    for (int i = 0; a[i] != '\0'; i++){
        a[i] = tolower(a[i]);
    }
    printf("The string is: %s", a);
    return 0;
}