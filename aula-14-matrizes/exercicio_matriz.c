#include <stdio.h>

int main(void) {
    int numeros[2][2] = {
        {10, 20},
        {30, 40}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", numeros[i][j]);
        }
        printf("\n");
    }

    return 0;
}










#include <stdio.h>

int main(void) {
    int matriz[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}










#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    printf("Soma de todos os elementos: %d\n", soma);

    return 0;
}
