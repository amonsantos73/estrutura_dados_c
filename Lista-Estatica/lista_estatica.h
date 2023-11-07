typedef struct produto Produto;
typedef struct lista Lista;

Lista *cria_lista(void);

int cria_produto(Produto **produto);

int checa_lista_cheia(Lista *li);

int grava_produto(Lista *li, Produto *x);

int busca_menor_preco(Lista *li);

int remove_produto(Lista *li);

int troca_posicao(Lista *li);

int imprime_lista(Lista *li);

int libera_lista(Lista *li);

void status_operacao(int status);