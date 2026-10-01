#include <stdio.h>
#include <stdlib.h>

int calibrar_sensores(float *leituras, int tam, float ganho, float offset, float limite_max) {
    int alarmes = 0;
    float *p = leituras;

    for (int i = 0; i < tam; i++) {

        *p = (*p * ganho) + offset;


        if (*p > limite_max) {
            *p = limite_max;
            alarmes++;
        }

        p++;
    }

    return alarmes;
}

int main() {
    float leituras[5] = {10.0f, 25.5f, 40.0f, 15.0f, 50.0f};
    int tam = 5;
    float ganho = 1.2f;
    float offset = 5.0f;
    float limite_max = 45.0f;

    printf("Leituras originais:\n");
    for (int i = 0; i < tam; i++) {
        printf("%.2f ", leituras[i]);
    }
    printf("\n\n");

    int total_alarmes = calibrar_sensores(leituras, tam, ganho, offset, limite_max);

    printf("Leituras calibradas:\n");
    for (int i = 0; i < tam; i++) {
        printf("%.2f ", leituras[i]);
    }
    printf("\n\nTotal de alarmes acionados: %d\n", total_alarmes);


}
