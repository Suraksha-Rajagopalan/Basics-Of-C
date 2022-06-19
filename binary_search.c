#include <stdio.h>

int Binary_Search(int k[], int start, int end, int key){
    int mid;
    mid=(start+end)/2;
    if (start>end){
        return 0;
    }
    else if(k[mid]==key){
        return 1;
    }
    else if(k[mid]>key){
        return Binary_Search(k, start, mid-1, key);
    }
    else if(k[mid]<key){
        return Binary_Search(k, mid+1, end, key);
    }
}

int main(){
    int n, m;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int p[n];
    printf("Array elements(Sorted Form): ");
    for (int i=0; i<n; i++){
        scanf("%d", &p[i]);
    }
    printf("Element to be found: ");
    scanf("%d", &m);
    int result;
    result=Binary_Search(p, 0, n, m);
    if (result){
        printf("Element Found!!");
    }
    else{
        printf("Element not found");
    }
    return 0;
}