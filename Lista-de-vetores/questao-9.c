int main(int argc, char const *argv[]) {
    int vetorNumeros[6];
    printf ("digite 6 numeros pares\n");
 
    for (int i = 0; i < 6; i++) {
        int valor;
        scanf("%d", &valor);
        while(valor % 2 != 0) {
            printf ("Ops! O númerio inserido de ser par\n");
            scanf("%d", &valor);
        }
        vetorNumeros[i] = valor;
    }

    printf("Vetor inserido invertido: ");
    for (int i = 5; i >= 0; i--) {
        printf("%d%s ", vetorNumeros[i], i > 0 ? "," : "\n");
    }

    return 0;
}
