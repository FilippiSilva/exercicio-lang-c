#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor1[10];
    int vetor2[10];

    puts("digite 10 números inteiros para o veto 1");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    puts("digite 10 números inteiros para o veto 2");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    int vetor3[10];
    int indiceVetor3 = 0;
    for (int i = 0; i < 10; i++) {
        int valor1 = vetor1[i];
        for (int j = 0; j < 10; j++) {
            int valor2 = vetor2[j];

            if (valor1 == valor2) {
                bool valorRepetido = false;
                for (int z = 0; z < indiceVetor3; z++) {
                    int valor3 = vetor3[z];
                    if (valor3 == valor2) valorRepetido = true;
                }

                if (!valorRepetido) {
                    vetor3[indiceVetor3] = valor2;
                    indiceVetor3++;
                }
            }
        }
    }

    puts("\nnovo vetor:");
    for (int i = 0; i < indiceVetor3; i++) {
        printf("novo vetor[%d] = %d\n", i, vetor3[i]);
    }

    puts("\nfim\n");

    return 0;
}
