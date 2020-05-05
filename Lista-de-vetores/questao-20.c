#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[10];
    int vetorImpar[10];

    puts("digite 10 números com valor entre 0 à 50");

    int indiceVetorImpar = 0;
    for (int i = 0; i < 10; i++) {
        int valor;
        scanf("%d", &valor);
        while(valor < 0 || valor > 50) {
            puts("valor incorreto. Tente novamente");
            scanf("%d", &valor);
        }

        vetor[i] = valor;

        if (valor % 2 == 1) {
            vetorImpar[indiceVetorImpar] = valor;
            indiceVetorImpar++;
        }
    }


    puts("\nvetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);

        if ((i+1) < 10) {
            printf("%d ", vetor[i+1]);
        }
        i++;
    }

    puts("\nvetor de números ímpares: ");
    for (int i = 0; i < indiceVetorImpar; i++) {
        printf("%d ", vetorImpar[i]);

        if ((i+1) < indiceVetorImpar) {
            printf("%d ", vetorImpar[i+1]);
        }
        i++;
    }

    puts("\nfim");

    return 0;
}
