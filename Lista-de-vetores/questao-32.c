#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetorX[5] = {1,2,3,4,5};
    int vetorY[5] = {6,2,7,4,8};
    
    puts("digite 5 números inteiros para o vetor X");
    for (int i = 0; i < 5; i++) {
        bool valorDuplicado = true;
        while(valorDuplicado) {
            int valor;
            scanf("%d", &valor);
            
            valorDuplicado = false;
            for (int z = 0; z < i; z++) {
                if (valor == vetorX[z]) valorDuplicado = true;
            }

            if (!valorDuplicado) {
                vetorX[i] = valor;
            } else {
                puts("ops! valor já inserido nesse vetor");
            }
        }
    }

    puts("\ndigite 5 números inteiros para o vetor Y");
    for (int i = 0; i < 5; i++) {
        bool valorDuplicado = true;
        while(valorDuplicado) {
            int valor;
            scanf("%d", &valor);
            
            valorDuplicado = false;
            for (int z = 0; z < i; z++) {
                if (valor == vetorY[z]) valorDuplicado = true;
            }

            if (!valorDuplicado) {
                vetorY[i] = valor;
            } else {
                puts("ops! valor já inserido nesse vetor");
            }
        }
    }



    puts("\nsoma dos valores contidos no vetor X e Y\n");
    for (int i = 0; i < 5; i++) {
        printf("indice[%d] = %d\n", i, vetorX[i] + vetorY[i]);
    }

    puts("\nmultiplicação dos valores contidos no vetor X e Y\n");
    for (int i = 0; i < 5; i++) {
        printf("indice[%d] = %d\n", i, vetorX[i] * vetorY[i]);
    }

    puts("\nvalores contidos no vetor X e não em Y\n");
    for (int i = 0; i < 5; i++) {
        int valorX = vetorX[i];

        bool valorRepetido = false;
        for (int z = 0; z < 5; z++) {
            if (valorX == vetorY[z]) valorRepetido = true;
        }

        if (!valorRepetido) {
            printf("%d ", valorX);
        }
    }

    puts("\n\nvalores contidos no vetor X e Y\n");
    for (int i = 0; i < 5; i++) {
        int valorX = vetorX[i];

        bool valorRepetido = false;
        for (int z = 0; z < 5; z++) {
            if (valorX == vetorY[z]) valorRepetido = true;
        }

        if (valorRepetido) {
            printf("%d ", valorX);
        }
    }

    puts("\n\nvalores contidos no vetor X e Y\n");
    for (int i = 0; i < 5; i++) {
        int valorX = vetorX[i];
        printf("%d ", valorX);   
    }
    for (int i = 0; i < 5; i++) {
        int valorY = vetorY[i];

        bool valorRepetido = false;
        for (int z = 0; z < 5; z++) {
            if (valorY == vetorX[z]) valorRepetido = true;
        }

        if (!valorRepetido) {
            printf("%d ", valorY);
        }
    }

    puts("\n\nfim\n");

    return 0;
}
