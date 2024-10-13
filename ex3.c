#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main (){
    pid_t pid = fork();

    if (pid == 0) {//child process
        for (int i = 0; i<3; i++) {
            printf("Niko Juja\n");
            sleep(1);//sleep for 1 second
        }
    } else if (pid > 0){//parent process
        wait (NULL); //wait for child process to finish
        for (int i = 0; i<3; i++) {
            printf("ICS 2305 ni softlife\n");
            sleep(1);//sleep for 1 second
        }
    }else {
        //Error hanlding
        perror("fork");
        return 1;
    }
    return 0;
}
