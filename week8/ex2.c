#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
    for (int i = 0; i < 10; i++) {
        int * pntr = (int*)malloc(1024*1024*10);
        memset(pntr, 0, 1024*1024*10);
        sleep(1);
    }

    return 0;
}