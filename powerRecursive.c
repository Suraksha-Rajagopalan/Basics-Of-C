#include <stdio.h>

int ans(int base, int power){
    if (power==0){
        return 1;
    }

    if (power==1){
        return base;
    }

    else{
        return ans(base, power-1)*base;
    }
}

int main(){
    int a,b,num;
    printf("Enter the power andd base, respectively: ");
    scanf("%d %d",&a,&b);
    num=ans(b,a);
    printf("The result is: %d",num);

    return 0;

}