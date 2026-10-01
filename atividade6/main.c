#include <stdio.h>
#include <stdlib.h>

int divisao_segura(int dividendo, int divisor, int *quociente, int *resto) {

    if (quociente == NULL || resto == NULL || divisor == 0) {
        return 0;
    }

    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;

    return 1;
}

int main() {
    int q, r;

    if (divisao_segura(17, 5, &q, &r)) {
        printf("Sucesso! Quociente: %d, Resto: %d\n", q, r);
    } else {
        printf("Erro na divisao.\n");
    }

    if (!divisao_segura(10, 0, &q, &r)) {
        printf("Divisao por zero bloqueada com sucesso.\n");
    }

    if (!divisao_segura(10, 2, NULL, &r)) {
        printf("Ponteiro nulo detetado e bloqueado com sucesso.\n");
    }
}
