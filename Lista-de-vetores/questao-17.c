#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[10];

    puts("digite 10 números");
    for (int i = 0; i < 10; i++) {
        int valor;
        scanf("%d", &valor);
        if (valor > -1) {
            vetor[i] = valor;
        } else {
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    puts("\nfim");

    return 0;
}
