int main(int argc, char const *argv[]) {
    int vetorReais[10];
    int vetorReaisQuadrado[10];
    printf ("digite 10 numeros\n");
 
    for (int i = 0; i < 10; i++) {
       scanf("%d", &vetorReais[i]);
       vetorReaisQuadrado[i] = vetorReais[i] * vetorReais[i];
    }

    for (int i = 0; i < 10; i++) {
       printf("vetor números reais[%d] = %d\n", i, vetorReais[i]);
    }

    for (int i = 0; i < 10; i++) {
       printf("vetor número reais ao quadrado[%d] = %d\n", i, vetorReaisQuadrado[i]);
    }

    return 0;
}
