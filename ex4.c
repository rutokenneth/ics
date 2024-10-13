// Kenneth Ruto Kimutai SCT211-0029/2021
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>

int main()
{
    int p_id, p_pid, priority;

    p_id = getpid(); /* process id */
    p_pid = getppid(); /* parent process id */

    /* Get the process priority */
    priority = getpriority(PRIO_PROCESS, p_id);

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);
    printf("Process Priority: %d\n", priority);

    return 0;
}
