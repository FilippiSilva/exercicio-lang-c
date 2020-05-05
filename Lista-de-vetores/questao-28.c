#include <stdio.h>

int main(int argc, char const *argv[]) {
    int vetor[10];
    int vetor1[10];
    int vetor2[10];

    puts("digite 10 números inteiros para o vetor A");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int indiceVetor1 = 0;
    int indiceVetor2 = 0;
    for (int i = 0; i < 10; i++) {
        int valor = vetor[i];
        if (valor % 2 != 0) {
            vetor1[indiceVetor1] = valor;
            indiceVetor1++;
        } else {
            vetor2[indiceVetor2] = valor;
            indiceVetor2++;
        }
    }

    puts("\nv1: ");
    for(int i = 0; i < indiceVetor1; i++) {
        printf("v1[%d] = %d \n", i, vetor1[i]);
    }

    puts("\nv2: ");
    for(int i = 0; i < indiceVetor2; i++) {
        printf("v2[%d] = %d \n", i, vetor2[i]);
    }

    puts("\nfim\n");

    return 0;
}
