int main(int argc, char const *argv[]) {
    float vetorNumeros[6];
    float soma = 0;
    printf ("digite a nota das 15 provas\n");
 
    for (int i = 0; i < 15; i++) {
        float valor;
        scanf("%f", &valor);
        vetorNumeros[i] = valor;
        soma += + valor;
    }

    float media = soma / 15;
    printf("Média da turma: %f\n", media);

    return 0;
}
