#include <stdio.h>

/*
Write a program to input 5-digit integer number 
and print sum of digits in it.
*/

int main()
{
int a,sum;
printf("input 5-digit number:");
scanf("%d",&a);

while (a!=0){
	sum+=(a%10);
	a/=10;
}

printf("The sum of the digits is: %d",sum);
return 0;
}
