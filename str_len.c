#include <stdio.h>
#include <string.h>

int main(){
    int length;
    char s[100]={};
    printf("Enter a string: \n");
    scanf("%s",s);

    printf("The length of the string with function is: %d", strlen(s));

    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    printf("\nThe length of the string without using function is: %d", length);
    return 0;
}