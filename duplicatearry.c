#include <stdio.h>

int main(){
    int arr[5]={1,1,2,3,1};
    for (int j=0; j<5; j++){
        int count=0;
        int m=arr[j];
        for (int k=0; k<5; k++){
            if (arr[k]==m){
                ++count;
            } 
        }

        if (count>1){
            printf("%d ",arr[j]);
        }
    }
    return 0;
}