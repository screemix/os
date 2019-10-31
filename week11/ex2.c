#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	setvbuf(stdout, 0, _IOLBF, 6);
	printf("%c", 'H');
	sleep(1);
	printf("%c", 'E');
	sleep(1);
	printf("%c", 'L');
	sleep(1);
	printf("%c", 'L');
	sleep(1);
	printf("%c\n", 'O');
	sleep(1);
}
