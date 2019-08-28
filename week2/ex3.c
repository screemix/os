#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <string.h>

int main(int argc, char **argv){
    int n = atoi(argv[1]);
    //scanf("%d", &n);
    int k = 0;
    while (k<n && n!=0){
            for (int j = 0; j < ((2*n-1) - (2*(k+1)-1))/2; j++){
                printf(" ");
            }
            for(int j = 0; j<2*(k+1)-1; j++){
                printf("*");
            }
            for (int j = 0; j < ((2*n-1) - (2*(k+1)-1))/2; j++) {
                printf(" ");
            }
            printf("\n");
            k++;
    }

    return 0;
}