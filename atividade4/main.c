#include <stdio.h>
#include <stdlib.h>

void inverterVetor(int *inicio, int *fim) {
    while (inicio < fim) {
        int aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        inicio++;
        fim--;
    }
}

int main()
{
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    inverterVetor(vetor, vetor + 9);

    printf("\nVetor invertido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(vetor + i));
    }
}
