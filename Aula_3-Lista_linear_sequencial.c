
#include <stdbool.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int nroElem;
} LISTA;

void iniciarzarLista(LISTA* l){
    l-> nroElem = 0;
}

int tamanhoLista(LISTA* l){
    return l->nroElem;
}

void exibirLista(LISTA* l){
    int i;
    printf("Lista: \" ");

    for (i = 0; i < l->nroElem; i++)
    {
        printf("%i ,", l->A[i].chave);  
    }
    printf("\"\n");
    
 }

 int buscaSequencial(LISTA* l, TIPOCHAVE ch) {
    int i = 0;
    
    while (i < l->nroElem)
    {
        if (ch == l->A[i].chave)
        {
            return i;
        } else{
            i++;
        }
        
    }    
    return -1;
 }

bool inserElemeLista(LISTA* l, REGISTRO reg, int i){
    int j;
    
    if(l->nroElem == MAX || i < 0 || i > l->nroElem){
        return false;
    }

    for (j = l->nroElem; i > 0; i--)
    {
        l->A[i] = l->A[i-1];
    }
    
    l->A[i] = reg;
    l->nroElem++;
    
    return true;

}