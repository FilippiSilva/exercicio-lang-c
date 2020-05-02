int main(int argc, char const *argv[]) {
    int vetorNumeros[8];
    int x;
    int y;
    printf ("digite 8 numeros\n");
 
    for (int i = 0; i < 8; i++) {
       scanf("%d", &vetorNumeros[i]);
    }

    printf("defina o valor de X(0 ... 7): ");
    scanf("%d", &x);
    printf("defina o valor de Y(0 ... 7): ");
    scanf("%d", &y);

    int soma = vetorNumeros[x] + vetorNumeros[y];
    printf("a soma dos valores digitados na posição X e Y é: %d\n", soma);

    return 0;
}
