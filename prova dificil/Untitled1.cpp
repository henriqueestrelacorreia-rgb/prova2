
#include <stdio.h>

int main() {
    int quantidade, i;
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;
    int excelencia = 0;

    float media, frequencia;
    float somaMedias = 0;

    printf("QUANTOS ALUNOS DESEJA CADASTRAR? ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {

        printf("\n--- ALUNO %d ---\n", i);

        printf("Digite a media: ");
        scanf("%f", &media);

        printf("Digite a frequencia: ");
        scanf("%f", &frequencia);

        somaMedias += media;

        if (frequencia < 75) {
            printf("REPROVADO POR FALTA!\n");
            reprovados++;

        } else if (media == 10 && frequencia == 100) {
            printf("APROVADO COM EXCELENCIA!\n");
            excelencia++;
            aprovados++;

        } else if (media >= 7) {
            printf("APROVADO!\n");
            aprovados++;

        } else if (media >= 5) {
            printf("RECUPERACAO!\n");
            recuperacao++;

        } else {
            printf("REPROVADO!\n");
            reprovados++;
        }
    }

    printf("\n===== RESULTADO DA TURMA =====\n");

    printf("Aprovados: %d\n", aprovados);
    printf("Excelencia: %d\n", excelencia);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);

    printf("Media geral da turma: %.2f\n",
           somaMedias / quantidade);

    return 0;
}

