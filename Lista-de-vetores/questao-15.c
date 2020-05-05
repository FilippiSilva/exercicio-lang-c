#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int quantidade = 0;
    int vetor[20];

    printf("digite 20 números\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    int indexVerificado = 0;
    int vetorNumerosVerificados[20];
    for (int i = 0; i < 20; i++) {
        if (i == 0) {
            vetorNumerosVerificados[i] = vetor[i];
            indexVerificado++;
        } else {
            bool numeroRepetido = false;
            for (int j = 0; j < indexVerificado; j++) {
                if (vetor[i] == vetorNumerosVerificados[j]) {
                    numeroRepetido = true;
                }
            }

            if (!numeroRepetido) {
                vetorNumerosVerificados[indexVerificado] = vetor[i];
                indexVerificado++;
            }
        }
    }

    puts("\nLista de número que não se repetem\n");
    for (int i = 0; i < indexVerificado; i++) {
        printf("%d ", vetorNumerosVerificados[i]);
    }
    puts("\n");

    return 0;
}
