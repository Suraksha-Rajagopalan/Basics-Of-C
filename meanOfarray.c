#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements inn the array: ");
    scanf("%d",&n);
    int arr[n];
    int sum;
    printf("Enter the elements of the array: ");
    for (int i=0; i<n; i++){
        scanf("%d ",&arr[i]);
    }

    for (int j=0; j<n; j++){
        sum+=arr[j];
    }
    printf("The mean of the set of elements is: %lf\n",(double)sum/n);
    return 0;
}