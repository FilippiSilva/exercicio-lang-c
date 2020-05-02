int main(int argc, char const *argv[]) {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];

    printf("%d\n", soma);

    A[4] = 100;

    printf("Valores do vetor A\n");
    for(int i=0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}