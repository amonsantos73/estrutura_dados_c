#include "lista_estatica.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

  struct produto {
    int codigo;
    char nome[30];
    float preco;
    int und_produto;
  };

  struct lista {
    struct produto *dados[MAX];
    int qtd;
  };

  Lista *cria_lista() {
    Lista *li = (Lista *)malloc(sizeof(Lista));
    if (li == NULL) {
      li->qtd = 0;
    }
    return li;
  }

  int cria_produto(Produto **produto) {
    *produto = (Produto *)malloc(sizeof(Produto));
    if (*produto == NULL) {
      return 0;
    }

    printf("Digite o código do produto: ");
    scanf("%d", &(*produto)->codigo);
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", (*produto)->nome);
    printf("Digite o preço do produto: ");
    scanf("%f", &(*produto)->preco);
    printf("Digite a quatidade do produto em estoque: ");
    scanf("%d", &(*produto)->und_produto);

    return 1;
  }

  int checa_lista_cheia(Lista *li){
    if(li == NULL) return -1;

    if(li->qtd == MAX){
      return 1;
    }

    return 0;
  }
  
  int grava_produto(Lista *li, Produto *produto) {  
    if(li == NULL) return 0;

    if(checa_lista_cheia(li)) return 0;

    li->dados[li->qtd] = produto;

    li->qtd++;

    return 1;
  }

  int remove_produto(Lista *li) {  
    if(li == NULL) return 0;
    int n;
    printf("Insira o numero de produtos que deseja remover do fim da lista: \n");
    scanf("%d", &n);
    li->qtd = li->qtd - n;
    return 1;
  }

  int troca_posicao(Lista *li){
    if(li == NULL) return 0;
    int pos1, pos2;
    printf("Digite as duas posições que deseja trocar: \n");
    scanf("%d %d", &pos1, &pos2);
    if((pos1 > pos2 && li->qtd-1 < pos1) || (pos2 > pos1 && li->qtd-1 < pos2)){//checando se a posicao de swap n é maior q a lista
      return 0;
    }

    Produto *x = li->dados[pos1];
    li->dados[pos1] = li->dados[pos2];
    li->dados[pos2] = x;

    return 1;
  }

  int imprime_lista(Lista *li){
    int i;
    if(li == NULL) return 0;

    for(i = 0; i < li->qtd; i++){
      printf("Código: %d\n", li->dados[i]->codigo);
      printf("Nome: %s\n", li->dados[i]->nome);
      printf("Preço: %f\n", li->dados[i]->preco);
      printf("Quantidade: %d\n", li->dados[i]->und_produto);
      printf("\n");
    }
    return 1;
  }

  int busca_menor_preco(Lista *li){
    if(li == NULL) return 0;
    
    int menor,i,pos_menor=0;
    menor = li->dados[0]->preco;
    
    for(i=1; i  < li->qtd; i++){
      if(li->dados[i]->preco < menor){
        menor = li->dados[i]->preco;
        pos_menor = i;
      }
      return 1;
    }

    printf("Produto com menor preço: \n");
    printf("Código: %d\n", li->dados[pos_menor]->codigo);
    printf("Nome: %s\n", li->dados[pos_menor]->nome);
    printf("Preço: %d\n", li->dados[pos_menor]->preco);
    printf("Quantidade: %d\n", li->dados[pos_menor]->und_produto);
    printf("\n");
  }

  int libera_lista(Lista *li){
    free(li->dados);
    li->qtd = 0;
    return 1;
  }

  void status_operacao(int status){
    if(status) printf("Operação realizada com sucesso!\n");
    else printf("Erro ao realizar operação!\n");
  }