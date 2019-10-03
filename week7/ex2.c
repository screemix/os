#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int main() {
    int n;
    scanf("%d", &n);
    int* a = (int* )malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        a[i] = i;
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}