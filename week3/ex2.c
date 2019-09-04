#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
void bubble_sort(int a[], int n){

    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1])
                swap(&a[j], &a[j+1]);
}
int main() {
    int a[5];
    for (int i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
    bubble_sort(a, 5);
    //printf("\n");
    for (int i = 0; i<5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}