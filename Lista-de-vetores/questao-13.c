int main(int argc, char const *argv[]) {
    int vetorNumeros[5];
    int indiceMaiorNumero;
    int indiceMenorNumero;
    printf ("digite 5 números\n");
 
    for (int i = 0; i < 5; i++) {
        int valor;
        scanf("%d", &valor);
        vetorNumeros[i] = valor;
        
        if (i == 0  || valor < vetorNumeros[indiceMenorNumero]) {
            indiceMenorNumero = i;
        }

        if (i == 0  || valor > vetorNumeros[indiceMaiorNumero]) {
            indiceMaiorNumero = i;
        }
    }

    printf("Indice do maior valor: %d\n", indiceMaiorNumero);
    printf("Indice do menor valor: %d\n", indiceMenorNumero);

    return 0;
}
