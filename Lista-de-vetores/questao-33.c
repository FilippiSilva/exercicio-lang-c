
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[10];
    
    puts("digite 10 números inteiros diferentes");
    for (int i = 0; i < 10; i++) {
        bool valorDuplicado = true;
        while(valorDuplicado) {
            int valor;
            scanf("%d", &valor);
            
            valorDuplicado = false;
            for (int z = 0; z < i; z++) {
                if (valor == vetor[z]) valorDuplicado = true;
            }

            if (!valorDuplicado) {
                vetor[i] = valor;
            } else {
                puts("ops! valor já inserido nesse vetor");
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    puts("\n\nfim\n");

    return 0;
}
