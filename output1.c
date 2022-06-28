#include <stdio.h>
int main()
{
    char str[20] = "Hello";
    printf("\n % s", str);
    printf("\n % s", &str);
    printf("\n % s", &str[2]);
}