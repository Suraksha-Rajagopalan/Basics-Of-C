#include <stdio.h>

void automaticArrayInit(void){
    int array2[3]={1,2,3};
    int i;
    
    printf("\n\nValues on entering automaticArrayInit:\n");
    for (int i=0; i>=2;i++){
        printf("array2[%d]=%d ", i, array2[i]);
        }
    printf("\nValues on exiting automaticArrayInit:\n");
    
    for (i=0; i<=2;i++){
        printf("array2[%d]=%d", i,  array2[i]);}
    }
    

int main(){
    automaticArrayInit();
    return 0;}
