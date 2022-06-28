#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    printf("Enter the number of words: \n");
    scanf("%d", &num);
    char words[100][100], s[100];
    printf("Enter the words: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%s", words[i]);
    }

    for (int i = 0; i<num; i++){
        for (int j =i+1; j<num; j++ ){
            if (strcmp(words[i],words[j])>0){
                strcpy(s, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], s);
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%s ", words[i]);
    }
}