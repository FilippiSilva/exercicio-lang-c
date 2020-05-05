#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    puts("digite 10 números inteiros");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    puts("números primos:\n");
    int i = 1;
    while (i < 10) {
        int valor = vetor[i];
        bool verificaNumPrimo = false;
        if (valor > 1) {
            if (valor % 2 == 0) {
                if (valor == 2) verificaNumPrimo = true;
            } else if (valor % 3 == 0) {
                if (valor == 3) verificaNumPrimo = true;
            } else if (valor % 5 == 0) {
                if (valor == 5) verificaNumPrimo = true;
            } else if (valor % 7 == 0) {
                if (valor == 7) verificaNumPrimo = true;
            }
        }

        if (verificaNumPrimo) {
            printf("vetor[%d] = %d\n", i, valor);
        }
        i++;
    }

    puts("\nfim\n");

    return 0;
}
