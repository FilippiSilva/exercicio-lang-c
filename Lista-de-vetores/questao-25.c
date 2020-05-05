#include <stdio.h>

int main(int argc, char const *argv[]) {
    int vetor[100];

    int i = 1;
    int indiceVetor = 0;
    while (indiceVetor < 100) {
        if (i % 7 != 0) {
            if ((i - 7) % 10 != 0) {
                vetor[indiceVetor] = i;
                indiceVetor++;
            }
        }
        i++;
    }

    int j = 0;
    while (j < 100) {
        printf("%d\n", vetor[j]);
        j++;
    }

    puts("\nfim\n");

    return 0;
}
