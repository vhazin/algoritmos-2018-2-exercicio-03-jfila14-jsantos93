// Jonathan Coutinho Alves Santos


#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa {
    int numero;
    struct pessoa *proximo;

};

typedef struct fila{
    int total; 
    struct pessoa *primeiro;
    struct pessoa *ultimo;
};



void deletelista (struct fila *lista, int del){
    struct pessoa *anterior = NULL, *auxiliar;
    auxiliar = lista -> primeiro;
    while (aux != NULL){
        if (auxiliar -> numero == del){
            if (anterior == NULL)
                lista -> primeiro = auxiliar -> proximo;
            else
                anterior -> proximo = auxiliar -> proximo;
            lista -> total = (lista -> total) -1;
            return;
        }
        anterior = auxiliar;
        auxiliar = auxiliar -> proximo;
    }
    return;
}



void addlista( struct fila *lista, int add){
    struct pessoa *novo = (pessoa) malloc(sizeof(struct pessoa));
    novo -> numero = add;
    novo -> proximo = NULL;
    if (lista -> primeiro == NULL){
        lista -> primeiro = novo;
        lista -> ultimo = novo;
        return;
    }
    lista -> ultimo -> proximo = novo;
    lista -> ultimo == novo;
    return;
}

iint main(void) {
    fila *copa = criarfila();
    int n = 0, m = 0, i, j;
    int identificador;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d",&identificador);
        entrarfila(copa, identificador);
    }
    scanf("%d", &m);
    for (j = 0; j < m; j++) {
        scanf("%d", &identificador);
        sairdafila(copa, identificador);
    }
    pessoa *filafinal = copa -> primeiro;
    int fim = n - m;
    for (i = 0; i < fim; i++) {
        if(filafinal -> prox == NULL){
            printf("%d", filafinal -> num);
        }else{
            printf("%d ", filafinal -> num);
            filafinal = filafinal -> prox;
        }
    }
    return 0;
}



