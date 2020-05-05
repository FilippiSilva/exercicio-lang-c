#include <stdio.h>

int main(int argc, char const *argv[]) {
    int vetor[6];

    puts("digite 6 números inteiros ");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }

    puts("\nnúmeros pares:");
    for (int i = 0; i < 6; i++) {
        int valor = vetor[i];
        if (valor % 2 == 0) {
            printf("vetor[%d] = %d\n", i, valor);
        }
    }
    
    puts("\nsoma dos números pares:");
    int somaNumPares = 0;
    for (int i = 0; i < 6; i++) {
        int valor = vetor[i];
        if (valor % 2 == 0) {
            somaNumPares += valor;
        }
    }
    printf("%d\n", somaNumPares);

    puts("\nnúmeros ímpares:");
    for (int i = 0; i < 6; i++) {
        int valor = vetor[i];
         if (valor % 2 != 0) {
            printf("vetor[%d] = %d\n", i, valor);
        }
    }

    puts("\nquantidade de números ímpares:");
    int contadorNumImpares = 0;
    for (int i = 0; i < 6; i++) {
        int valor = vetor[i];
         if (valor % 2 != 0) {
             contadorNumImpares++;
         }
    }
    printf("%d\n", contadorNumImpares);

    puts("\nfim\n");

    return 0;
}
