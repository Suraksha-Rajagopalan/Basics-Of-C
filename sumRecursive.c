#include <stdio.h>

int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}

int main(){
    int x,ans;
    printf("Enter a number: ");
    scanf("%d",&x);
    ans=sum(x);
    printf("The sum of %d numbers is : %d",x, ans);
    return 0;
}