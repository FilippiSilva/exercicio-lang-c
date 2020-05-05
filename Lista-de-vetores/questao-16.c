#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[5];

    puts("digite 5 números");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    puts("digite o código(0, 1 ou 2)");

    int codigo;
    scanf("%d", &codigo);
    if (codigo == 1) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", vetor[i]);
        }
    } else if (codigo == 2) {
        for (int i = 4; i > -1; i--) {
            printf("%d ", vetor[i]);
        }
    } else if (codigo == 0) {
        return 0;
    } else {
        puts("código inválido");
    }

    puts("\nfim");

    return 0;
}
