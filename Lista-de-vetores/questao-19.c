#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
    int vetor[50];
    
    puts("usado formúla (i +5) % (i+1) \n");

    for (int i = 0; i < 50; i++) {
        vetor[i] = (i +5) % (i+1);
    }

    puts("resultado: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    puts("\n\nfim");

    return 0;
}
