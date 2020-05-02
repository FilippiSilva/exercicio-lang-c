int main(int argc, char const *argv[]) {
    int vetorNumeros[10];
    int menorNumero;
    int maiorNumero;
    printf ("digite 10 numeros\n");
 
    for (int i = 0; i < 10; i++) {
        int valor;
        scanf("%d", &valor);
        vetorNumeros[i] = valor;

        if (i == 0  || valor < menorNumero) {
            menorNumero = valor;
        }

        if (i == 0  || valor > maiorNumero) {
            maiorNumero = valor;
        }
    }

    printf("Menor número inserido: %d\n", menorNumero);
    printf("Maior número inserido: %d\n", maiorNumero);

    return 0;
}
