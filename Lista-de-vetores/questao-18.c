#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[10];

    puts("digite 10 números");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    puts("digite o valor de X");

    int x;
    scanf("%d", &x);

    int contador = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            contador++;
        }
    }

    printf("quantidade de multiplos de %d: %d\n", x, contador);

    return 0;
}
