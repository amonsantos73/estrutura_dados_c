#include "lista_estatica.h"
#include <stdio.h>
int main(void) {

  Lista *li = NULL;
  Produto *produto = NULL;
  int status, opcao, n, pos1, pos2;

  li = cria_lista();
  if (li == NULL)
    printf("Erro ao criar lista!\n");
  else
    printf("Lista criada com sucesso!\n");

  do {
    printf("Escolha uma das opções abaixo:\n");
    printf("1- Inserir um produto\n");
    printf("2- Remover produtos do final da lista\n");
    printf("3- Buscar produto com menor preço\n");
    printf("4- Trocar a posição de dois produtos\n");
    printf("5- Imprimir lista\n");
    printf("6- Liberar lista\n");
    printf("7- Sair\n");
    printf(":>");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      status = cria_produto(&produto);
      status_operacao(status);
      status = grava_produto(li, produto);
      status_operacao(status);
      break;
    case 2:
      printf("Insira o numero de produtos que deseja remover do final da "
             "lista: \n");
      scanf("%d", &n);
      status = remove_produto(li);
      status_operacao(status);
      break;
    case 3:
      status = busca_menor_preco(li);
      status_operacao(status);
      break;
    case 4:
      status = troca_posicao(li);
      status_operacao(status);
      break;
    case 5:
      status = imprime_lista(li);
      status_operacao(status);
      break;
    case 6:
      status = libera_lista(li);
      status_operacao(status);
      break;
    case 7:
      printf("Saindo...\n");
      break;
    default:
      printf("Digite um valor válido de opção! \n\n");
      break;
    }
  } while (opcao != 7);
}