#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
void* threadFunc(void* data){

    pthread_t *id = (pthread_t *)data;
    printf("Thread %d created \n", (int)*id);
    printf("Hello from thread %d \n", (int)*id);
    printf("Thread %d exits\n", (int)*id);
    pthread_exit(0);

}

int main(){
    int n;
    scanf("%d", &n);
    pthread_t threads[n];
    for (int i = 0; i < n; i++){
        pthread_create(&threads[i], NULL, threadFunc, (void *)&threads[i]);

        /**if we will write 19th line instead of the loop below, we will get threads work sequentially**/

        //pthread_join(threads[i], NULL);

    }

    /**if we will write this loop instead of line 19, threads will be work in parallel **/

    for (int i = 0; i < n; i++){
        pthread_join(threads[i], NULL);
    }
        pthread_exit(NULL);
    return 0;
}