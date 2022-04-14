#include <stdio.h>
int main(){
int a,b,c,d,e;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
if (a!=b & a!=c & a!=d & a!=e)
printf("%d",a);
else if (b!=a & b!=c & b!=d & b!=e)
printf("%d",b);
else if (c!=b & c!=a & c!=d & c!=e)
printf("%d",c);
else if (d!=b & d!=c & d!=a & d!=e)
printf("%d",d);
else
printf("%d",e);
return 0;
}
