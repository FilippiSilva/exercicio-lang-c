#include <stdio.h>

int main(int argc, char const *argv[]) {
    float vetorAlunos[10][2];

    puts("digite números e altura(metros) de cada aluno, no total de 10");
    for (int i = 0; i < 10; i++) {
        scanf("%f %f", &vetorAlunos[i][0], &vetorAlunos[i][1]);
    }

    float vetorMaisAlto[2];
    float vetorMaisBaixo[2];
    for(int i = 0; i < 10; i++) {
        if (i == 0) {
            vetorMaisAlto[0] = vetorAlunos[i][0];
            vetorMaisAlto[1] = vetorAlunos[i][1];

            vetorMaisBaixo[0] = vetorAlunos[i][0];
            vetorMaisBaixo[1] = vetorAlunos[i][1];
        } else {
             if (vetorMaisAlto[1] < vetorAlunos[i][1]) {
                vetorMaisAlto[0] = vetorAlunos[i][0];
                vetorMaisAlto[1] = vetorAlunos[i][1];
            }
            if (vetorMaisBaixo[1] > vetorAlunos[i][1]) {
                vetorMaisBaixo[0] = vetorAlunos[i][0];
                vetorMaisBaixo[1] = vetorAlunos[i][1];
            }
        }
    }

    printf("\nAluno mais alto: número %.0f, altura %.2f", vetorMaisAlto[0], vetorMaisAlto[1]);
    printf("\nAluno mais baixo: número %.0f, altura %.2f", vetorMaisBaixo[0], vetorMaisBaixo[1]);

    puts("\nfim\n");

    return 0;
}
