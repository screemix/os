#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <stdio.h>


int main() {
    struct rusage usage;
    for (int i = 0; i < 10; i++) {
        int * pntr = (int*)malloc(1024*1024*10);
        memset(pntr, 0, 1024*1024*10);
        getrusage(RUSAGE_SELF, &usage);
        printf("%lu \n", usage.ru_maxrss);
        sleep(1);
    }

    return 0;
}