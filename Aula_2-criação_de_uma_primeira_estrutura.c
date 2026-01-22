#include <stdio.h>
#include <malloc.h>
#define pesoMaximo 120

typedef struct{
    int peso;
    int altura;
} pesoAltura;

int main() {
    
    pesoAltura pessoa1;
    pesoAltura* pessoa2 = (pesoAltura*) malloc(sizeof(pesoAltura));
    
    pessoa1.peso = 130;
    pessoa1.altura = 180;
    
    pessoa2->peso = 200;
    
    printf("peso %i, altura %i. ", pessoa1.peso, pessoa1.altura);
    
    if (pessoa1.peso > pesoMaximo) printf("peso assima do maximo estipulado\n"); else printf("peso dentro da normalidade.\n");
    
    printf("Função malloc\n");
    printf("peso %i, altura %i", pessoa2->peso, pessoa2->altura);

    if (pessoa2->peso > pesoMaximo) printf("peso acima do máximo\n"); else printf("peso a baixo do máximo\n");

    // Imprimindo informações de tamanho e endereço
    printf("\nINFORMAÇÕES DE MEMÓRIA:\n");
    printf("Tamanho da estrutura: %lu bytes\n", sizeof(pesoAltura));
    printf("Tamanho do ponteiro pessoa2: %lu bytes\n", sizeof(pessoa2));
    printf("Endereço do ponteiro pessoa2: %p\n", (void*)&pessoa2);
    printf("Endereço armazenado em pessoa2: %p\n", (void*)pessoa2);
    printf("Endereço da pessoa1: %p\n", (void*)&pessoa1);
    
    free(pessoa2);

    return 0;
}

