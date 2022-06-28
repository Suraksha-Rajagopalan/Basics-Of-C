#include<stdio.h>
#include<string.h>
int main(){
    int num;
    printf("Enter the number of words: ");
    scanf("%d", &num);
    char str[num][100];
    int max=0;//Record the longest stroke subscript 
    int a[num];//Record the array of strings length 
    for(int i=0;i<num;i++){
        scanf("%s",str[i]); 
        a[i]=strlen(str[i]);//Only the STR is defined as a two-dimensional array 
    }
    for(int i=0;i<num;i++){
        if(a[i]>a[max]){
            max = i;
        }
    }
    printf("The longest string is: %s",str[max]);
}