#include <sys/mman.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(){

    int source, destination;
    char *src, *dest;
    size_t size;

    source = open("ex1.txt", O_RDONLY);
    size = lseek(source, 0, SEEK_END);

    src = mmap(NULL, size, PROT_READ, MAP_PRIVATE, source, 0);
    destination = open("ex1.memcpy.txt", O_RDWR | O_CREAT, 0666);

    ftruncate(destination, size);

    dest = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, destination, 0);

    memcpy(dest, src, size);

    return 0;
}
