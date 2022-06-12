#include <stdio.h>

int decimalBinary(int dec)
{
    if(dec==0)
    return 0;
    else
    return (dec%2 + 10*decimalBinary(dec/2));
}
int main()
{
    int n, sol;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    sol = decimalBinary(n);
    printf("%d", sol);
    return 0;
}