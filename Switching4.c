#include <stdio.h>
int main(){
    switch(2){
        case 1:
            printf("Namaste");
        case 2:
            printf("Brahmaputra");
            goto River;
        case 3: 
            printf("Moskwa");
        case 4:River:
            printf("Ganga");}
    return 0;
}
