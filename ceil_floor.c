#include <stdio.h>
#include <math.h>

int main(){
    int c,f;
    float a[4]={1.5,2.4,1.1,0.9};
    for (int i=0; i<4; i++){
        c=ceil(a[i]);
        f=floor(a[i]);
        printf("%d %d",c , f);
        printf("\n");
    }
    return 0;
}