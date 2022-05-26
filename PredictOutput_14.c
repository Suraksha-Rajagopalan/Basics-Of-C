#include <stdio.h> 
//Here the while loop does not get runned as cnt value is not greater or equal to 10
//Hence, the value of cnt remains unchanged
void main()  {     
  int cnt=1;     
  while(cnt>=10)      {          
    printf("%d,",cnt);         
    cnt+=1;      }     
  printf("\nAfter  loop  cnt=%d",cnt);     
  printf("\n"); }
