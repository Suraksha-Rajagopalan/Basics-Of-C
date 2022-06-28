#include <stdio.h>
#include <ctype.h>

int main(){
    char str[50];
    printf("Enter a string:\n");
    scanf("%s", str);

    printf("Printing the inputted string using printf......\n");
    printf("%s\n",str);

    printf("Enter another string:\n");
    scanf("%s",str);

    printf("Printing the string using putchar().........\n");
    for (int i = 0; str[i] != '\0'; i++){
        putchar(str[i]);
    }
    printf("\n");

    printf("Enter another string:\n");
    scanf("%s",str);

    printf("Printing the string using puts().........\n");
    puts(str);
    return 0;

}