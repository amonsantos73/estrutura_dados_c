typedef struct {
  double real;
  double imag;
} num_complexo;

num_complexo *cria_complexo(double real, double imag);
num_complexo *soma_complexo(num_complexo *a, num_complexo *b);
num_complexo *subtracao_complexo(num_complexo *a, num_complexo *b);
num_complexo *multiplicacao_complexo(num_complexo *a, num_complexo *b);
num_complexo *divisao_complexo(num_complexo *a, num_complexo *b);
void imprime_complexo(num_complexo *a);
void libera_complexo(num_complexo *a);