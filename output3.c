#include <stdio.h>
#include <string.h>

int main(){
    char str[]={};
    printf("Enter a string......\n");
    scanf("%s", str);

    printf("%s\n",str);

    int count = 0;
    for (int k = 0; str[k] != '\0'; k++)
    {
        ++count;
    }

    printf("The length of string calculated without a using function is: %d\n", count);
    int j = strlen(str);
    printf("The length of the string calculated via strlen is: %d", j);

    return 0;
}