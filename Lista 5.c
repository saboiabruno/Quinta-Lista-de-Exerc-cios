#include<stdio.h>
#include<stdlib.h>

typedef struct cel Celula;
typedef struct{
    char nome[30];
    int cpf[11];
}Cliente;

struct cel{
    Cliente cliente;
    struct cel *prox
};
void inserirEncadeada(Celula *l, Celula *c, int posicao){
    Celula *p = l;
    if(p->prox!=NULL){
        for(int i = 0;i<posicao;i++){
            p = p->prox;
            if(p->prox==NULL)
                break;
        }
    }
    c->prox = p->prox;
    p->prox = c;
}

void remover(Celula *l, int posicao){
    Celula *p = l, *pp = NULL;
    if(p->prox!=NULL){
        for(int i = 1;i<posicao;i++){
            p = p->prox;
            if(p->prox->prox==NULL)
                break;
        }
        pp = p->prox;
        p->prox = pp->prox;
        free(pp);
    }
}

Celula *buscar(Celula *l, Cliente c){
    Celula *p=l, *aux=NULL;
    if(p->prox!=NULL){
        p=p->prox;
        while(!(!strcmp(p->cliente.nome, c.nome)&&p->cliente.cpf==c.cpf)){
            p=p->prox;
            if(p==NULL){
                printf("Cliente nao encontrado");
                break;
            }
        }
        aux = p;
    }
    else
        printf("A lista esta vazia");
    return aux;
}
void imprimirElementos(Celula *l){
    Celula *p=l;
    if(p->prox!=NULL){
        for(p=p->prox;p->prox!=NULL;p=p->prox)
            printf("%s,",p->cliente.nome);
        printf("%d\n",p->cliente.cpf);
    }
}
struct pilha{
int topo;
char cliente[N][30]
int cpf[11]
};

void destruirLista(Celula *l){
    for(int i=retornarTamanho(l);i>0;i--)
        remover(l,i);
}
int pilha_vazia(pilha p){
if(p.topo==-1)
    return true;
    return false;
}

void inserirFim(Lista *lista, Cliente c){
    lista->vetor[tamanho]=c;
    lista->tamanho = lista->tamanho+1;
}

void  removerInicio(Lista *lista) {
    int i;
    for(i=0;  i<lista->tamanho-1; i++){
        lista->vetor[i] = lista->vetor[i+1];
        }
        lista->tamanho = lista->tamanho - 1;
}
void  removerFim(Lista *lista) {
    lista->tamanho = lista->tamanho -1;
}


int main(){
Celula *lista;
lista = NULL;
}
