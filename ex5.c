#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* Function to demonstrate execlp() */
void use_execlp() {
    printf("\nUsing execlp() to run 'ls -l':\n");
    // execlp() searches the PATH for the executable
    execlp("ls", "ls", "-l", NULL);
    perror("execlp failed");
}

/* Function to demonstrate execv() */
void use_execv() {
    printf("\nUsing execv() to run 'ls -l':\n");

    // Arguments must be passed as an array of strings
    char *args[] = {"/bin/ls", "-l", NULL};
    execv(args[0], args);
    perror("execv failed");
}

/* Function to demonstrate execve() */
void use_execve() {
    printf("\nUsing execve() to run 'ls -l':\n");

    // Arguments must be passed as an array of strings
    char *args[] = {"/bin/ls", "-l", NULL};

    // Pass the current environment
    extern char **environ;
    execve(args[0], args, environ);
    perror("execve failed");
}

int main() {
    int choice;

    printf("Choose the exec() system call to demonstrate:\n");
    printf("1. execlp()\n");
    printf("2. execv()\n");
    printf("3. execve()\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Call the appropriate function based on the user's choice
    switch (choice) {
        case 1:
            use_execlp();
            break;
        case 2:
            use_execv();
            break;
        case 3:
            use_execve();
            break;
        default:
            printf("Invalid choice!\n");
            exit(1);
    }

    return 0;
}
