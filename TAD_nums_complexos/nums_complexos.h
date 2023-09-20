typedef struct num_complexo numero;

numero *cria_complexo(double real, double imag);
numero *soma_complexo(numero *a, numero *b);
numero *subtracao_complexo(numero *a, numero *b);
numero *multiplicacao_complexo(numero *a, numero *b);
numero *divisao_complexo(numero *a, numero *b);
void imprime_complexo(numero *a);
void libera_complexo(numero *a);