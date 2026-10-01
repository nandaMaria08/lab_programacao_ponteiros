#include <stdio.h>
#include <stdlib.h>

void trocar(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void ordenar3(float *a, float *b, float *c){
    if(*a > *b) trocar(a, b);
    if(*a > *c) trocar(a, c);
    if(*b > *c) trocar(b, c);
}

int main()
{
    float x = 15.5f, y = 3.2f, z = 8.7f;

    printf("Antes da ordenacao: x = %.1f, y = %.1f, z = %.1f\n", x, y, z);
    ordenar3(&x, &y, &z);
    printf("Apos a ordenacao:   x = %.1f, y = %.1f, z = %.1f\n", x, y, z);
}
