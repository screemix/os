#include  <stdio.h>
#include  <signal.h>
#include  <stdlib.h>
#include  <unistd.h>

void  INThandler(int sig){
    printf("\nuser hitted ctrl-c\n");
    exit(0);
}

int  main(void){
    signal(SIGINT, INThandler);
    while (1)
        pause();
}