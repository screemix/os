#include <stdio.h>
void swap(int * a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    swap (&a, &b);
    printf("%d %d", a, b);
    printf("\n");
    return 0;
}