
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[10];
    
    puts("digite 10 números inteiros");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int aux;
    for (int i=0; i < 10; i++ ){
        for (int j=i+1; j < 10; j++ ){
            if (vetor[i] > vetor[j] ){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    // printf("\n Ordenado com sucesso!");
    // for(i=0;i<=4;i++) {
    //     printf("\n%d",numero[i]);
    // }     

    for (int i = 0; i < 10; i++) {
        printf("vetorOrdenado[%d] = %d\n", i, vetor[i]);
    }

    puts("\n\nfim\n");

    return 0;
}
