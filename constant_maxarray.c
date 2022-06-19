#include <stdio.h>
#define n 10

int main(){
    //const int n=10;
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for (int j=0; j<n; j++){
        if (arr[j]>max){
            max=arr[j];
        }
    }
    printf("The max element %d",max);
    return 0;
}