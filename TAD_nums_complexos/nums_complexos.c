#include <stdio.h>
#include <stdlib.h>
#include "nums_complexos.h"

struct num_complexo{
  double real;
  double imag;
};

numero *cria_complexo(double real, double imag) {
  numero *c = malloc(sizeof(numero));
  c->real = real;
  c->imag = imag;
  return c;
}

numero *soma_complexo(numero *a, numero *b) {
  numero *c = malloc(sizeof(numero));
  c->real = a->real + b->real;
  c->imag = a->imag + b->imag;
  return c;
}

numero *subtracao_complexo(numero *a, numero *b){
    numero *c = malloc(sizeof(numero));
    c->real = a->real - b->real;
    c->imag = a->imag - b->imag;
    return c;  
}

numero *multiplicacao_complexo(numero *a, numero *b){
    numero *c = malloc(sizeof(numero));
    c->real = (a->real * b->real) - (a->imag * b->imag);
    c->imag = (a->real * b->imag) + (a->imag * b->real);
    return c;
}

numero *divisao_complexo(numero *a, numero *b){
    numero *c = malloc(sizeof(numero));
    c->real = (a->real * b->real + a->imag * b->imag) / (b->real * b->real + b->imag * b->imag);
    c->imag = (a->imag * b->real - a->real * b->imag) / (b->real * b->real + b->imag * b->imag);
    return c;
}

void imprime_complexo(numero *a) {
  printf("%.2f + %.2fi\n", a->real, a->imag);
}

void libera_complexo(numero *a){
    free(a);
}