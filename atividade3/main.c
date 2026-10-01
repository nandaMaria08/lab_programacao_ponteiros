#include <stdio.h>
#include <stdlib.h>

void analisarVetor(int v[], int tam, int *menor, int *maior, float *media){
    if(tam < 0){
        return;
    }

    *menor = v[0];
    *maior = v[0];
    int soma = 0;

    for (int i = 0; i < tam; i++) {
        if (v[i] < *menor) *menor = v[i];
        if (v[i] > *maior) *maior = v[i];
        soma += v[i];
    }

    *media = (float)soma / tam;

}

int main()
{
    int vetor[10] = {12, 5, 8, 23, 42, 1, 19, 30, 7, 15};
    int menor, maior;
    float media;


    analisarVetor(vetor, 10, &menor, &maior, &media);

    printf("Menor elemento: %d\n", menor);
    printf("Maior elemento: %d\n", maior);
    printf("Media aritmetica: %.2f\n", media);
}
