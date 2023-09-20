#include <stdio.h>
#include <stdlib.h>
#include "nums_complexos.h"

int main() {
    numero *a, *b, *c;

    a = cria_complexo(1.0, 2.0);
    b = cria_complexo(3.0, 4.0);

    c = soma_complexo(a, b);
    imprime_complexo(c);

    c = subtracao_complexo(a, b);
    imprime_complexo(c);

    c = multiplicacao_complexo(a, b);
    imprime_complexo(c);
    
    c = divisao_complexo(a, b);
    imprime_complexo(c);

    libera_complexo(a);
    libera_complexo(b);
    libera_complexo(c);
    return 0;
}