#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int dp;
    int fd[2];
    char string1[256] = "Postav' 2 pointa za labu pozaluista";
    char string2[256];

    printf("Before creating the pipe: \n String1: %s \n String2: %s\n", string1, string2);

    pid_t fork_result;
    if (pipe(fd) == 0) {
        fork_result = fork();
    }
    if (fork_result == 0) {
        dp = write(fd[1], string1, strlen(string1));
        close(fd[1]);
        dp = read(fd[0], string2, strlen(string1));
        close(fd[0]);
        /*Showing results*/
        printf("After creating the pipe: \n String1: %s \n String2: %s\n", string1, string2);
        exit(0);
    }
}