#include <stdio.h>
#define L 10
int main(){
    int a=10;
    switch (a,a*2){
    case L:
        printf("ABC");
        break;
    case L*2:
        printf("XYZ");
        break;
    case L*3:
        printf("PQR");
        break;
    default:
        printf("MNO");}
    return 0;
}
