#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int fd = open("ex1.txt", O_RDWR);
    struct stat file_stat;
    int size;
    char *addr;
    
    char *text = "This is a nice day";
    char *space = "";
    
    fstat(fd, &file_stat);
    size = file_stat.st_size;
    addr = mmap(NULL, strlen(text), PROT_WRITE|PROT_READ, MAP_SHARED, fd, 0);
    
    int diff = abs(strlen(addr) - strlen(text));
    int i;
    for (i = 0; i < strlen(addr); i++) {
        addr[i] = text[i];
    }
    
    for (int j = 0; j<diff; j++){
    	addr[i] = space[0];
    	i++;
    }
    
    return 0;
}
