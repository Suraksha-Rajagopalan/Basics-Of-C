#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int pipe1[2]; // Pipe between parent and child 1
    int pipe2[2]; // Pipe between parent and child 2

    if (pipe(pipe1) == -1 || pipe(pipe2) == -1) {
        perror("Pipe creation failed");
        return 1;
    }

    pid_t child1, child2;
    child1 = fork();

    if (child1 == -1) {
        perror("Forking child 1 failed");
        return 1;
    }

    if (child1 == 0) {
        // Child process 1
        close(pipe1[1]); // Close the write end of pipe1
        int sum = 0;
        int number;
        while (read(pipe1[0], &number, sizeof(int)) > 0) {
            sum += number;
        }
        close(pipe1[0]); // Close the read end of pipe1
        printf("Child 1: Sum = %d\n", sum);
        write(pipe2[1], &sum, sizeof(int)); // Send sum to parent through pipe2
        close(pipe2[1]); // Close the write end of pipe2
        return 0;
    } else {
        child2 = fork();

        if (child2 == -1) {
            perror("Forking child 2 failed");
            return 1;
        }

        if (child2 == 0) {
            // Child process 2
            close(pipe1[1]); // Close the write end of pipe1
            close(pipe2[1]); // Close the write end of pipe2
            int count = 0;
            int number;
            while (read(pipe1[0], &number, sizeof(int)) > 0) {
                count++;
            }
            close(pipe1[0]); // Close the read end of pipe1
            close(pipe2[0]); // Close the read end of pipe2
            printf("Child 2: Count = %d\n", count);
            write(pipe2[1], &count, sizeof(int)); // Send count to parent through pipe2
            close(pipe2[1]); // Close the write end of pipe2
            return 0;
        } else {
            // Parent process
            close(pipe1[0]); // Close the read end of pipe1
            close(pipe2[0]); // Close the read end of pipe2
            int number;
            while (1) {
                printf("Enter an integer (or a special character to exit): ");
                if (scanf("%d", &number) == 1) {
                    // Square the number and send it to both children
                    int squared = number * number;
                    write(pipe1[1], &squared, sizeof(int));
                } else {
                    break; // Exit the loop if a special character is entered
                }
            }
            close(pipe1[1]); // Close the write end of pipe1

            int child1Sum, child2Count;
            read(pipe2[0], &child1Sum, sizeof(int)); // Read sum from child 1 through pipe2
            close(pipe2[0]); // Close the read end of pipe2
            wait(NULL); // Wait for child 2 to exit
            read(pipe2[0], &child2Count, sizeof(int)); // Read count from child 2 through pipe2
            close(pipe2[0]); // Close the read end of pipe2

            if (child2Count == 0) {
                printf("Cannot divide by zero\n");
            } else {
                float mean = (float) child1Sum / child2Count;
                printf("Mean of square of numbers: %.2f\n", mean);
            }
            return 0;
        }
    }
}
