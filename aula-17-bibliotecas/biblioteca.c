#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100] = "Bem-vindo(a), ";

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    // strcpy: copia o nome para a variável de confirmação
    strcpy(confirmacao, nome);

    // strcat: monta a mensagem de boas-vindas
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);

    // strlen: quantidade de caracteres do nome
    printf("Quantidade de caracteres: %zu\n", strlen(nome));

    // strcmp: identifica o perfil
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else if (strcmp(perfil, "COMUM") == 0) {
        printf("Perfil: Comum\n");
    } else {
        printf("Perfil: invalido\n");
    }

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}



















#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100] = "Produto: ";

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%49s", produto);

    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    // strcpy: copia o nome do produto para outra variável
    strcpy(copia, produto);

    // strcat: gera a descrição no formato "Produto: Nome"
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);

    // strlen: quantidade de caracteres do nome
    printf("Caracteres: %zu\n", strlen(produto));

    // strcmp: identifica a categoria
    if (strcmp(categoria, "HARDWARE") == 0) {
        printf("Categoria: Hardware\n");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: invalida\n");
    }

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}



















#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigo[10];
    char copia[50];
    char mensagem[100] = "Ola, ";

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);

    // strcpy: armazena o nome em outra variável
    strcpy(copia, nome);

    // strcat: monta a mensagem "Ola, Nome!"
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", copia);

    // strcmp: identifica o curso
    if (strcmp(codigo, "CC") == 0) {
        printf("Curso: Ciencia da Computacao\n");
    } else if (strcmp(codigo, "SI") == 0) {
        printf("Curso: Sistemas de Informacao\n");
    } else {
        printf("Curso: codigo invalido\n");
    }

    // strlen: quantidade de caracteres do nome
    printf("Caracteres no nome: %zu\n", strlen(nome));

    printf("\n%s\n", mensagem);

    return 0;
}
