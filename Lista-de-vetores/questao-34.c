
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[15];
    
    int countNumZero = 0;
    puts("digite 15 números inteiros");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] == 0) countNumZero++;
    }

    int tamanhoVetorCompacto = 15 - countNumZero;
    int vetorCompacto[tamanhoVetorCompacto];
    int indiceVerificado = 0;
    for (int i = 0; i < 15; i++) {
        if (vetor[i] != 0) {
            vetorCompacto[indiceVerificado] = vetor[i];
            indiceVerificado++;
        }
    }

    for (int i = 0; i < tamanhoVetorCompacto; i++) {
        printf("vetorCompacto[%d] = %d\n", i, vetorCompacto[i]);
    }

    puts("\n\nfim\n");

    return 0;
}
