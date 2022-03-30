#include <stdio.h>

/*
Write a program to evaluate the expression (i) a + b (ii) a – b 
(iii) a x b (iv) a/b (v) Remainder of a/b.
*/

int main()
{
int a,b;

scanf("%d",&a);
scanf("%d",&b);
printf("Sum of the 2 numbers is: %d\n",a+b);
printf("Difference of the 2 numbers is: %d\n",a-b);
printf("Product of the 2 numbers is: %d\n",a*b);
printf("Quotient of the 2 numbers is: %d\n",a/b);
printf("Reminder of the 2 numbers is: %d\n",a%b);

return 0;
}
