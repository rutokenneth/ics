// Kenneth Ruto Kimutai SCT211-0029/2021
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("X\n");
    fork();
    printf("Y\n");
    fork();
    printf("Z\n");
    return 0;
}
