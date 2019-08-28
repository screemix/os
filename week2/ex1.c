#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(){
    int a;
    float b;
    double c;

    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;

    printf("%lu %d \n", sizeof(a), a);
    printf("%lu %f \n", sizeof(b), b);
    printf("%lu %lf \n", sizeof(c), c);
    return 0;

}