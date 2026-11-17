
#include <stdio.h>

int main() {

    int opcao;
    int numero, i;
    int soma = 0;
    int contador = 0;

    do {

        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Mostrar tabuada\n");
        printf("2 - Somar numeros de 1 ate N\n");
        printf("3 - Contar numeros pares\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:

                printf("Digite um numero: ");
                scanf("%d", &numero);

                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n",
                           numero, i, numero * i);
                }

                break;

            case 2:

                printf("Digite um numero positivo: ");
                scanf("%d", &numero);

                soma = 0;
                i = 1;

                while (i <= numero) {
                    soma += i;
                    i++;
                }

                printf("Resultado da soma: %d\n", soma);

                break;

            case 3:

                printf("Digite um numero positivo: ");
                scanf("%d", &numero);

                contador = 0;
                i = 1;

                while (i <= numero) {

                    if (i % 2 == 0) {
                        contador++;
                    }

                    i++;
                }

                printf("Quantidade de pares: %d\n", contador);

                break;

            case 4:

                printf("Encerrando o programa...\n");

                break;

            default:

                printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}

