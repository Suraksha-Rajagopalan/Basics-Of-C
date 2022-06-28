#include <stdio.h>
#include <string.h>

int main(){
    char s1[100] = {};
    char s2[100] = {};
    int count = 0;
    printf("Enter string1: \n");
    scanf("%s", s1);
    printf("Enter string2: \n");
    scanf("%s", s2);
    printf("Comparision of strings without using functions: ");
    if (strlen(s1) > strlen(s2)){
        printf("%d\n", 1);
    }
    if (strlen(s2) > strlen(s1)){
        printf("%d\n", -1);
    }
    else{
        for (int i = 0; s1[i] != '\0'; i++){
            if (s1[i] > s2[i]){
                printf("%d\n", 1);
                count++;
                break;
            }
            if (s1[i] < s2[i]){
                printf("%d\n", -1);
                count++;
                break;
            }
        }
    }
    if (count == 0){
        printf("%d\n",count);
    }

    printf("Comparision of strings using functions is: %d", strcmp(s1,s2));
    return 0;
}