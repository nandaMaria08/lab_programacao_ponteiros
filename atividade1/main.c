#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    float f = 8.79;
    char c = 'M';

    int *ponteiro_i = &i;
    float *ponteiro_f = &f;
    char *ponteiro_c = &c;

    printf("Valores originais\n");
    printf("%d  |  %p\n", i, ponteiro_i);
    printf("%f  |  %p\n", f, ponteiro_f);
    printf("%c  |  %p\n", c, ponteiro_c);


    *ponteiro_i = 12;
    *ponteiro_f = 17.3;
    *ponteiro_c = 'F';

    printf("Valores Mudados\n");
    printf("%d \n", i);
    printf("%f \n", f);
    printf("%c \n", c);
}
