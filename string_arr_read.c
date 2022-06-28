#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%s", str);
    printf("Printing the string that was read by scanf......\n");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);
    printf("\n");

    // for scanset we have to use %s[] in scanf

    printf("Enter another string:");
    scanf("%s[]", str);
    printf("Printing the string that was read by scanset......\n");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);
    printf("\n");
    // reading a string via getchar

    printf("Enter another string:");
    int i = 0, ch = 0;
    char str1[5000];
    do
    {
        ch = getchar();   // takes character, number, etc from the user
        str1[i] = ch;      // store the ch into str[i]
        i++;              // increment loop by 1
    } while (str1[i] != '\0' && str1[i] != EOF); // ch is not equal to '\n'
    printf("Printing the string that was read by getchar......");
    printf("%s", str1);

    return 0;
}