#include <stdio.h>
#include <stdlib.h>
#include "nums_complexos.h"

num_complexo *cria_complexo(double real, double imag) {
  num_complexo *c = malloc(sizeof(num_complexo));
  c->real = real;
  c->imag = imag;
  return c;
}

num_complexo *soma_complexo(num_complexo *a, num_complexo *b) {
  num_complexo *c = malloc(sizeof(num_complexo));
  c->real = a->real + b->real;
  c->imag = a->imag + b->imag;
  return c;
}

num_complexo *subtracao_complexo(num_complexo *a, num_complexo *b){
    num_complexo *c = malloc(sizeof(num_complexo));
    c->real = a->real - b->real;
    c->imag = a->imag - b->imag;
    return c;  
}

num_complexo *multiplicacao_complexo(num_complexo *a, num_complexo *b){
    num_complexo *c = malloc(sizeof(num_complexo));
    c->real = (a->real * b->real) - (a->imag * b->imag);
    c->imag = (a->real * b->imag) + (a->imag * b->real);
    return c;
}

num_complexo *divisao_complexo(num_complexo *a, num_complexo *b){
    num_complexo *c = malloc(sizeof(num_complexo));
    c->real = (a->real * b->real + a->imag * b->imag) / (b->real * b->real + b->imag * b->imag);
    c->imag = (a->imag * b->real - a->real * b->imag) / (b->real * b->real + b->imag * b->imag);
    return c;
}

void imprime_complexo(num_complexo *a) {
  printf("%.2f + %.2fi\n", a->real, a->imag);
}

void libera_complexo(num_complexo *a){
    free(a);
}