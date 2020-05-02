int main(int argc, char const *argv[]) {
    int quantidade = 0;
    int vetor[10];

    printf("digite 10 números\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int vetorNumerosVerificados[10];
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                quantidade++;
            }
        }
    }
    printf("Quantidade de números repetidos: %d\n", quantidade);

    return 0;
}
