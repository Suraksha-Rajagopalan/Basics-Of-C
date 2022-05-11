#include <stdio.h>
int main(){
int i,j=0;
printf("EVEN ");
while (i<=50){
    if (i%2==0){
    printf("%d ",i);}
    ++i;
    }
 
printf("\nODD ");
while (j<=50){
    if (j%2!=0){
    printf("%d ",j);}
    ++j;
    }    
return 0;
}
