#include <stdio.h>

/*
Write a program to input four numbers and print percentages of 
each numbers on their sum.
*/

int main()
{
int a,b,c,d,sum;
printf("input 4 numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
sum=a+b+c+d;

printf("Percent of first number is: %d %%\n",a*100/sum);
printf("Percent of second number is: %d %%\n",b*100/sum);
printf("Percent of third number is: %d %%\n",c*100/sum);
printf("Percent of fourth number is: %d %%",d*100/sum);
return 0;
}
