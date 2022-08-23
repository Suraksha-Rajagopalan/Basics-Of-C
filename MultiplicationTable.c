#include <stdio.h>

void main(){
  int n;
  printf("Enter a number whoes table you want to see: ");
  scanf("%d",&n);
  for (int i=1; i<=10; i++){
    printf("%d x %d = %d\n",n,i,n*i);
  }
}
