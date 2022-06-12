#include <stdio.h>

int printReverseDigit(int N)
{
	int num;
    if (N!=0){
        num=N%10;
        //printf("%d ",num);
        N/=10;
        return 10*printReverseDigit(N)+num;
    }
}

int main(){
    int N,ans;
    printf("Enter a number: ");
    scanf("%d",&N);

    ans=printReverseDigit(N);
    printf("%d", ans);
    
    return 0;
}