#include <stdio.h>

int abc(int arr[], int n)
{
    if (n==1)
    {
        return 0;
    }
    if (arr[n-1] >= arr[n-2])
    {
        return n-1;
    }
    for (int i = 1; i<n-1; i++)
    {
        if (arr[i] >= arr[i+1] && arr[i] >= arr[i-1]){
            return i;
        }
    }
}

int main(){
    int arr[5]={2,10,3,5,8};
    int n=5;
    int a=abc(arr,n);
    printf("%d",a);
}
