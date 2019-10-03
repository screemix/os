#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>


void * my_realloc(void * ptr, size_t prev_size, size_t new_size){
    
    void *new_ptr;

    if (prev_size == 0) {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL) {
        new_ptr = malloc(new_size);
    }

    else{
        if (new_size > prev_size) {
            new_ptr = malloc(new_size);
            memcpy(new_ptr, ptr, prev_size);
            free(ptr);
        }

        else{
            new_ptr = ptr;
        }
    }
    return new_ptr;
}
int main() {
    return 0;
}