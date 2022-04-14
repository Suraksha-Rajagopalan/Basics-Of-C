#include<stdio.h>
int main(){
    int a= 20;
    if (a%2==0 && a>20){
        printf("Good");}
    else if (a%2==0 &&a%8==0){
        printf("Forest");}
    else if (a%2==0 && a>10){
        printf("Space");}
    return 0;
}
