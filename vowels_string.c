#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of charecters: ");
    scanf("%d",&n);
    char s[n];
    printf("Enter the string: ");
    for (int j=0; j<n; j++){
        scanf("%s ",&s[j]);
    }
    int count;
    for (int i=0; i<n; i++){
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'){
            ++count;
        }
    }
    printf("The number of vowels in the string is: %d",count);
    return 0;
}