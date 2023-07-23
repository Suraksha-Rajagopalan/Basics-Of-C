#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

int main() {
    int pipefd[2];
    pid_t pid;
    char buffer[BUFFER_SIZE];

    if (pipe(pipefd) == -1) {
        perror("Pipe creation failed");
        exit(EXIT_FAILURE);
    }

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid > 0) {
        // Parent process
        close(pipefd[0]);  // Close the read end of the pipe

        printf("Enter a string: ");
        fgets(buffer, BUFFER_SIZE, stdin);

        // Remove newline character from input
        buffer[strcspn(buffer, "\n")] = '\0';

        printf("Parent process received: %s\n", buffer);

        // Convert string to uppercase
        for (int i = 0; buffer[i]; i++) {
            buffer[i] = toupper(buffer[i]);
        }

        printf("Parent process converted it to: %s\n", buffer);

        // Write the converted string to the pipe
        write(pipefd[1], buffer, strlen(buffer) + 1);

        close(pipefd[1]);  // Close the write end of the pipe

        // Wait for the child to finish
        waitpid(pid, NULL, 0);
    } else {
        // Child process
        close(pipefd[1]);  // Close the write end of the pipe

        // Read the string from the pipe
        read(pipefd[0], buffer, BUFFER_SIZE);

        printf("Child process received: %s\n", buffer);

        // Convert string to uppercase
        for (int i = 0; buffer[i]; i++) {
            buffer[i] = toupper(buffer[i]);
        }

        printf("Child process converted it to: %s\n", buffer);

        close(pipefd[0]);  // Close the read end of the pipe
    }

    return 0;
}
