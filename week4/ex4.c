#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char s[1024];
    fork();
    fgets(s, sizeof(s), stdin);
    while(1) {
        printf("$ ");
        system(s);
        fgets(s, sizeof(s), stdin);
    }
}
