#include <stdio.h>
#include <stdlib.h>

int meu_strlen(char *s) {
    int tamanho = 0;
    while (*s != '\0') {
        tamanho++;
        s++;
    }
    return tamanho;
}

void para_maiusculas(char *s) {
    while (*s != '\0') {
        if (*s >= 'a' && *s <= 'z') {
            *s = *s - ('a' - 'A');
        }
        s++;
    }
}

int main() {
    char texto[] = "Ola, Mundo!";

    printf("Texto original: %s\n", texto);
    printf("Tamanho da string: %d\n", meu_strlen(texto));

    para_maiusculas(texto);
    printf("Texto em maiusculas: %s\n", texto);

    return 0;
}
