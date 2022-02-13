#include<stdio.h>
#include<malloc.h>

int main(){
    int *vector = (int *)malloc(1*sizeof(int));
    printf("Ingrese 1 valor entero para almacenar en el vector. Presione enter luego de ingresar el valor.\n");
    scanf("%d", vector);

    printf("Ingrese cinco valores enteros mas para ingresar al vector. Presione enter luego de cada valor\n");
    for (int i = 1; i < 5; i++)
    { 
       vector = (int *)realloc(vector, (i+1)*sizeof(int));
       scanf("%d", vector+i);
    }  
    
    printf("Los datos son:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(vector + i));
    }        
    return 0;
}
