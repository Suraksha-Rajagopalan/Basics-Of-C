#include <stdio.h>

/*
Write a program to input temperature in Celsius & to print its 
Fahrenheit equivalent. F = C * (9/5) + 32.
*/

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}
