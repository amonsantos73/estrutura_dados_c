#include <stdlib.h>
#include <stdio.h>
#include <lista_encadeada.h> //interface da tad

int cria_dado(int *dado);

int main(void){
    lista *li = NULL;
    int opcao, dado, ret, pos; // ret = retorno da função

    do{
		printf("\n\nMenu de opções");
		printf("\n1 - Criar lista");
		printf("\n2 - Liberar lista");
		printf("\n3 - Inserir elemento no início");
		printf("\n4 - Inserir elemento no final");
		printf("\n5 - Inserir elemento (ordenado)");
		printf("\n6 - Remover elemento do início");
		printf("\n7 - Remover elemento do final");
		printf("\n8 - Remover elemento (qualquer)");
		printf("\n9 - Buscar elemento pela posição");
		printf("\n10 - Buscar elemento pelo dado");
		printf("\n11 - Imprimir lista");
		printf("\n12 - Sair");
		printf("\nOpção: ");
		scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            li = cria_lista();
            
            if(li == NULL){
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação");
            }

            break;
        
        case 2:
            ret = libera_lista(li);
            li= NULL;

            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação");
            }

            break;

        case 3:
            ret = cria_dado(&dado);
            ret = insere_inicio_lista(li, dado);

            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação");
            }

            break;

        case 4:
            ret = cria_dado(&dado);
            ret = insere_final_lista(li, dado);
            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação");
            }

            break;
        
        case 5:
            ret = cria_dado(dado);
            ret = insere_ord_lista(li, dado);

            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação");
            }

            break;

        case 6:
            ret = remove_inicio_lista(li);
            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação");
            }

            break;

        case 7:
            ret = remove_final_lista(li);
            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação\n");
            }

            break;

        case 8:
            printf("Insira o numero a ser removido: ");
            scanf("%d", &dado)

            ret = remove_elemento_lista(li, dado);
            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
            }else{
                printf("Falha na operação");
            }

            break;

        case 9:
            printf("Insira a posição do element a ser buscado: ");
            scanf("%d", &pos)
            ret = busca_pos_lista(li, pos, &dado);
            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
                printf("Elemento na %dª posição: %d\n",pos, dado);
            }else{
                printf("Falha na operação!\n");
            }

            break;

        case 10:
            printf("Insira o dado a ser buscado: ");
            scanf("%d", &dado);

            ret = busca_dado_lista(li, dado, &pos);
            if(ret){//ret = 1 ret = true
                printf("Operação bem sucedida!\n");
                printf("Elemento na %dª posição: %d\n",pos, dado);
            }else{
                printf("Falha na operação!\n");
            }

            break;

        case 11:
            printf("Lista:  \n")
            ret = imprime_lista(&li);

            if(ret){//ret = 1 ret = true
                printf("\n")
            }else{
                printf("Falha na operação!\n");
            }

            break;
        case 12:
            ret = libera_lista(&li);
            if(ret){//ret = 1 ret = true
                printf("Encerrando programa...\n\n")
            }else{
                printf("Falha na operação!\n");
            }

            break;

        default:
            printf("Insira uma opção válida!!\n")
            break;
        }
}while(opcao!=12);

int cria_dado(int *dado) {
	printf("\nDigite um valor: ");
	scanf("%d", dado);

	return 1;
}