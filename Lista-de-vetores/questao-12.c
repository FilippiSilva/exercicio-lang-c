int main(int argc, char const *argv[]) {
    float vetorNumeros[5];
    float maiorNumero;
    float menorNumero;
    float soma = 0;
    printf ("digite 5 números\n");
 
    for (int i = 0; i < 5; i++) {
        int valor;
        scanf("%d", &valor);
        vetorNumeros[i] = valor;
        soma += valor;
        
        if (i == 0  || valor < menorNumero) {
            menorNumero = valor;
        }

        if (i == 0  || valor > maiorNumero) {
            maiorNumero = valor;
        }
    }

    float media = soma / 5;

    printf("Maior número: %f\n", maiorNumero);
    printf("Menor número: %f\n", menorNumero);
    printf("Média: %f\n", media);

    return 0;
}
