#include  <stdio.h>
#include  <sys/types.h>

void  StartProcess(char, int);

void  main(void)
{
     pid_t  pid;

     pid = fork();
     if (pid == 0) 
          StartProcess('A', getpid());
    printf("\n\n\n");

}

void StartProcess(char s, int pid)
{
    printf("\nProcess : %c with its current PID : %d and parent pid : %d started\n", s, getpid(), pid);
    if(s == 'A'){
        StartProcess('B', getpid());
        StartProcess('C', getpid());
        StartProcess('D', getpid());
        // printf("\nProcess : %c with its current PID : %d and parent pid : %d ended\n", s, getpid(), pid);
    }
    else if(s == 'B' || s == 'E' || s == 'F'){
        // printf("\nProcess : %c with its current PID : %d and parent pid : %d ended\n", s, getpid(), pid);
    }
    else if(s == 'C'){
        StartProcess('E', getpid());
        StartProcess('F', getpid());
        // printf("\nProcess : %c with its current PID : %d and parent pid : %d ended\n", s, getpid(), pid);
    }
    else if(s == 'D'){
        StartProcess('G', getpid());
        // printf("\nProcess : %c with its current PID : %d and parent pid : %d ended\n", s, getpid(), pid);
    }
    else if(s == 'G'){
        StartProcess('H', getpid());
        StartProcess('I', getpid());
        // printf("\nProcess : %c with its current PID : %d and parent pid : %d ended\n", s, getpid(), pid);
    }
}
