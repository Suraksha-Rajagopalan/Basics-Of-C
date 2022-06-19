#include <stdio.h>

void insertionsort(int k[], int n){
    for (int pass=1; pass<n; pass++){
        int key = k[pass];
        int j = pass-1;
        while (key < k[j] && j >= 0){
            k[j+1] = k[j];
            j--;
        }
    k[j+1] = key;
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
    insertionsort(p, num);
    printf("The ARRAY after sorting is:\n");
    for (int k = 0; k < num; k++){
        printf("%d ",p[k]);
    }
    return 0;
    
}