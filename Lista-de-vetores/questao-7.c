int main(int argc, char const *argv[]) {
    int vetorNumeros[10];
    int indiceNumero;
    int maiorNumero;
    printf ("digite 10 numeros\n");
 
    for (int i = 0; i < 10; i++) {
        int valor;
        scanf("%d", &valor);
        vetorNumeros[i] = valor;

        if (i == 0  || valor > maiorNumero) {
            indiceNumero = i;
            maiorNumero = valor;
        }
    }

    printf("Vetor inserido: ");
    for (int i = 0; i < 10; i++) {
        printf("%d%s ", vetorNumeros[i], i < 9 ? "," : "");
    }
    printf("\nIndice do maior número inserido: %d\n", indiceNumero);
    printf("Maior número inserido: %d\n", maiorNumero);

    return 0;
}
