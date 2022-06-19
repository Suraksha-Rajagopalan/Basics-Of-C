#include <stdio.h>

int main(){
    char a[8]="Program";
    char b[8]={};
    int u=8;
    for(int i=0; a[i]!='\0'; i++){
        b[i]=a[u];
        --u;
    }
    if (b==a){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}