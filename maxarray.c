#include <stdio.h>

int main(){
    int arr[10];
    printf("Enter the elements of the array: ");
    for (int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for (int j=0; j<10; j++){
        if (arr[j]>max){
            max=arr[j];
        }
    }
    printf("The max element %d",max);
    return 0;
}