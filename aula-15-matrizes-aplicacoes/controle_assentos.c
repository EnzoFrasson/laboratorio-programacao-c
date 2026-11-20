#include <stdio.h>

int main(void) {
    int assentos[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    int ocupados = 0;
    int disponiveis = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
    }

    printf("Assentos ocupados: %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);

    return 0;
}









#include <stdio.h>

int main(void) {
    int matriz[2][3];
    int soma = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("Soma de todos os elementos: %d\n", soma);

    return 0;
}









#include <stdio.h>

int main(void) {
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Aluno %d - Digite a nota da prova %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++) {
        float soma = 0;  // reinicia a cada aluno (linha)
        for (int j = 0; j < 2; j++) {
            soma += notas[i][j];
        }
        printf("Media do aluno %d: %.1f\n", i + 1, soma / 2);
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
    int pares = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("Quantidade de valores pares: %d\n", pares);

    return 0;
}









#include <stdio.h>

int main(void) {
    int matriz[3][3] = {
        {12, 45, 7},
        {33, 90, 21},
        {5, 68, 14}
    };
    int maior = matriz[0][0];  // começa com o primeiro elemento

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %d\n", maior);

    return 0;
}
