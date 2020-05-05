#include <stdio.h>

int main(int argc, char const *argv[]) {
    int vetorA[10];
    int vetorB[10];

    puts("digite 10 números inteiros para o vetor A");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorA[i]);
    }

    puts("digite 10 números inteiros para o vetor B");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetorB[i]);
    }

    int vetorC[10];
    for(int i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            vetorC[i] = vetorA[i];
        } else {
            vetorC[i] = vetorB[i];
        }
    }

    puts("Vetor C: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }

    puts("\nfim\n");

    return 0;
}
