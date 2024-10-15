// Kenneth Ruto Kimutai SCT211-0029/2021
#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>

int main(){
    int c = 5;
    pid_t pid = fork();

    if (pid == 0) {
        c += 5;
    } else {
        pid = fork();
        if (pid == 0) {
            c+=10;
        } else {
            c+=10;
        }
    }
    printf("%d\n", c);
    return 0;
}
