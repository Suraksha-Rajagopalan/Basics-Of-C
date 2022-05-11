#include <stdio.h>
int main(){
	printf("EVEN ");
    for (int i=0; i<=50; i++){
        if (i%2==0){
            printf("%d ",i);}
        }
     printf("\nODD ");
     for (int i=0; i<=50; i++){
        if (i%2!=0){
            printf("%d ",i);}
        }
    
    return 0;
}
           
