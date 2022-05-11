#include <stdio.h>
int main(){
int num=0;
int countpositive=0,countnegative=0,count0=0;
while (num!=999){
	scanf("%d", &num);
	printf("\n");
	if (num>0){
		++countpositive;}
	else if (num<0){
		++countnegative;}
	else if (num==0){
		++count0;}
    }
printf("Number of positive %d\n Number of negative %d\n Number of zeroes %d",countpositive,countnegative,count0);
return 0;
}
