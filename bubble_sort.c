#include <stdio.h>

int bubble_sort(int a[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int num;
    printf("The number of elements in the array: ");
    scanf("%d",&num);
    int p[num];
    printf("Elements: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &p[i]);
    }
    bubble_sort(p, num);
    printf("The ARRAY after sorting is:\n");
    for (int k = 0; k < num; k++){
        printf("%d ",p[k]);
    }
    return 0;
    
}