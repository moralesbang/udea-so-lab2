#include<stdio.h>
#include<malloc.h>
int main(){
    int *data = (int *)malloc(100*sizeof(int));
    int *funnyValue = data + 50;
    free(funnyValue);
    printf("%d,\n", *funnyValue);

    return 0;
}