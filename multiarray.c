#include <stdio.h>

int def(int n[2][3]){
    int sum;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            sum+=n[i][j];
        }
    }
    return sum;
}

int main(){
    int arr1[2][3]={{70,80,60},{95,96,91}};
    int arr2[2][3]={{70,60,75},{55,65,65}};
    int arr3[2][3]={{39,47,55},{90,98,88}};
    float p,q,r;
    p=def(arr1);
    printf("The average of first class is: %d\n", p/2);
    q=def(arr2);
    printf("The average of second class is: %d\n", q/2);
    r=def(arr3);
    printf("The average of third class is: %d", r/2);
    return 0;
}