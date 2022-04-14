#include <stdio.h>
int main()
{
int a=2,b=5;
a=a^b;
b=b^a;
printf("%d\n%d",a,b);
return 0;
}
