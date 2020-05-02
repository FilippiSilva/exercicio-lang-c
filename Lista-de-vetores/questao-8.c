int main(int argc, char const *argv[]) {
    int vetorNumeros[6];
    printf ("digite 6 numeros\n");
 
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetorNumeros[i]);
    }

    printf("Vetor inserido invertido: ");
    for (int i = 5; i >= 0; i--) {
        printf("%d%s ", vetorNumeros[i], i > 0 ? "," : "\n");
    }

    return 0;
}
