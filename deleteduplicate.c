#include <stdio.h>

int present(char a[30], char b){
    for (int n=0; a[n]!='\0'; n++ ){
        if (a[n]==b){
            return 1;
        }
    }
}

int main(){
    char arr[30]="amritavishwavidyapeetham";
    char ex[30]={};
    char new[30]={};
    int d=0;

    for (int i=0; arr[i]!='\0'; i++){
        int count=0;
        char m=arr[i];
        for (int j=0; arr[j]!='\0';j++){
            if (m==arr[j]){
                ++count;
            }
        }
        if (count>1){
            ex[d]=arr[i];
            ++d;
        }
    }
    
    int e=0;
    for (int p=0; p<30; p++){
        int c;
        c=present(ex, arr[p]);
        if (c!=0){
            new[e]=arr[p];
            ++e;
        
        }
    }
    printf("The new array is: %s",new);
    return 0;

}
