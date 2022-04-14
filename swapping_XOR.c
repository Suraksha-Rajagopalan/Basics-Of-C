# include <stdio.h>
int main(){
int a=7, b=8;

a=a^b;
b=a^b;
a=a^b;
printf("%d\n%d",a,b);
return 0;
}
