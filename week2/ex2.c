#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <string.h>

int main(){
    char a[100];
    gets(a);
    int d = strlen(a);
    for (int i = d-1; i>=0; i--){
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}