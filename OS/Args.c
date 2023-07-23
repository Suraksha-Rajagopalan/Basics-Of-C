#include  <stdio.h>
#include  <sys/types.h>

int main(){
    if(!fork()){
        char *args[] = {"./q8a", NULL};
        execvp(args[0], args);
        exit(0);
    }
    else if(!fork()){
        char *args[] = {"./q8b", NULL};
        execvp(args[0], args);
        exit(0);
    }
    while(wait(NULL) > 0);
    printf("Parent process is done\n\n\n\n");
}
