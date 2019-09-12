#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char* s;
    s = (char *) malloc(sizeof(char) * 1024);
    while(1) {
        printf("$ ");
        scanf("%s", s);
        system(s);
    }
}
