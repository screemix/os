#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int n = fork();
    if (n == 0){
        printf("Hello from child [PID - %d]\n", getpid());
    }
    else if (n>0){
        printf("Hello from parent [PID - %d]\n", getpid());
    }
    else{
        printf("Process creation was unsuccessful");
    }
    return 0;
}