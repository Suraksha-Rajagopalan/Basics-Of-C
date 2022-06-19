#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i] = rand()%1000;
    }
    int max=0;
    printf("The array is: \n");
    for(int j=0; j<10; j++){
        printf("%d ", arr[j]);
        if (arr[j]>max){
            max=arr[j];
        }
    }
    printf("\n");
    printf("The maximum element of the array is :%d",max);
    return 0;
}