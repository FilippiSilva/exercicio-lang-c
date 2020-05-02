int main(int argc, char const *argv[]) {
    int vetorNumeros[10];
    int qtdPares = 0;
    printf ("digite 10 numeros\n");
 
    for (int i = 0; i < 10; i++) {
       scanf("%d", &vetorNumeros[i]);
       if (vetorNumeros[i] % 2 == 0) {
           qtdPares++;
       }
    }

    printf("Quantidade de números pares: %d\n", qtdPares);

    return 0;
}
