#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

int main() {
    int pipefd[2];
    pid_t pid;
    char buffer[BUFFER_SIZE];
    int sum = 0;

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

        while (1) {
            printf("Enter an integer (or '#' to stop): ");
            fgets(buffer, BUFFER_SIZE, stdin);

            // Remove newline character from input
            buffer[strcspn(buffer, "\n")] = '\0';

            // Check if the special character '#' is entered
            if (strcmp(buffer, "#") == 0) {
                // Write the sum to the pipe
                write(pipefd[1], &sum, sizeof(int));
                break;
            }

            int num = atoi(buffer);
            sum += num;
        }

        close(pipefd[1]);  // Close the write end of the pipe

        // Wait for the child to finish
        wait(NULL);
    } else {
        // Child process
        close(pipefd[1]);  // Close the write end of the pipe

        int child_sum = 0;

        // Read integers from the pipe and calculate the sum
        int num;
        while (read(pipefd[0], &num, sizeof(int)) > 0) {
            child_sum += num;
        }

        printf("Child process received the sum: %d\n", child_sum);

        close(pipefd[0]);  // Close the read end of the pipe
    }

    return 0;
}
