#include <stdio.h>

void exibirMenu(void) {
    printf("\n===== CALCULADORA =====\n\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n\n");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main(void) {
    int opcao;
    float n1, n2;

    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nEncerrando o programa.\n");
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("\nOpcao invalida!\n");
            continue;
        }

        printf("\nPrimeiro numero: ");
        scanf("%f", &n1);
        printf("Segundo numero: ");
        scanf("%f", &n2);

        switch (opcao) {
            case 1:
                printf("\nResultado: %.2f\n", somar(n1, n2));
                break;
            case 2:
                printf("\nResultado: %.2f\n", subtrair(n1, n2));
                break;
            case 3:
                printf("\nResultado: %.2f\n", multiplicar(n1, n2));
                break;
            case 4:
                if (n2 == 0) {
                    printf("\nErro: divisao por zero nao e permitida!\n");
                } else {
                    printf("\nResultado: %.2f\n", dividir(n1, n2));
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}



















#include <stdio.h>

float maiorPreco(float p1, float p2) {
    if (p1 > p2) {
        return p1;
    }
    return p2;
}

int main(void) {
    float preco1, preco2;

    printf("===== COMPARADOR DE PRECOS =====\n\n");

    printf("Preco 1: ");
    scanf("%f", &preco1);
    printf("Preco 2: ");
    scanf("%f", &preco2);

    printf("\n");

    if (preco1 == preco2) {
        printf("Os precos sao iguais: R$ %.2f\n", preco1);
    } else {
        printf("Maior preco: R$ %.2f\n", maiorPreco(preco1, preco2));
    }

    return 0;
}




















#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int numero;

    printf("===== VERIFICADOR DE NUMEROS =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (verificarPar(numero) == 1) {
        printf("\nO numero %d e par.\n", numero);
    } else {
        printf("\nO numero %d e impar.\n", numero);
    }

    return 0;
}



















#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int inicial;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &inicial);

    printf("\nQuantidade apos duplicacao: %d\n", dobro(inicial));

    return 0;
}














#include <stdio.h>

void exibirLinha(void) {
    printf("**********\n");
}

int main(void) {
    exibirLinha();
    printf("RELATORIO DE ESTOQUE\n");
    exibirLinha();

    return 0;
}











#include <stdio.h>

int calcularFatorial(int n) {
    int fatorial = 1;

    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero (0 a 12): ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("\nNumero fora do intervalo permitido (0 a 12).\n");
    } else {
        printf("\nFatorial de %d = %d\n", numero, calcularFatorial(numero));
    }

    return 0;
}
