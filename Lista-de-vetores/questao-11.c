int main(int argc, char const *argv[]) {
    int vetorNumeros[10];
    int qtdNumerosNegativos = 0;
    int qtdNumerosPositivos = 0;
    printf ("digite 10 números\n");
 
    for (int i = 0; i < 10; i++) {
        int valor;
        scanf("%d", &valor);
        vetorNumeros[i] = valor;
        if (valor > 0) {
            qtdNumerosPositivos++;
        } else {
            qtdNumerosNegativos++;
        }
        
    }

    printf("Quantidade de números negativos: %d\n", qtdNumerosNegativos);
    printf("Quantidade de números positivos: %d\n", qtdNumerosPositivos);

    return 0;
}
