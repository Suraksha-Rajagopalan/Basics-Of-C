#include <stdio.h>

/*
Write a program to calculate simple interest amount for deposit amount (P) 
kept in bank for (n) years at the rate of ( r) simple interest per annum.
*/

int main()
{
int amount,years,rate;
printf("Enter deposited amount, years, rate of interest:");
scanf("%d%d%d",&amount,&years,&rate);
int simple_interest= amount*years*rate/100;
printf("Simple interest: %d",simple_interest);

return 0;
}
