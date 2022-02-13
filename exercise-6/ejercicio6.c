#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    int *data = malloc(100 * sizeof(int));
    free(data);
    printf("%d\n", data[21]);
    return 0;
}