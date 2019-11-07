#include <stdio.h>
#include <stdlib.h>

int main()
{
    int byte_count = 20; // number of symbols
    char data[4048];
    FILE *fp;
    fp = fopen("/dev/random", "r");
    fread(&data, 1, byte_count, fp);

    FILE *ex;
    ex=fopen("ex1.txt", "w");
    fprintf(ex, data);
    fclose(ex);
}
