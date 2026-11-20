#include <stdio.h>

int main(void) {
    char palavra[50];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra possui %d letras.\n", contador);

    return 0;
}









#include <stdio.h>

int main(void) {
    char nome[50];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Nome informado: %s", nome);

    return 0;
}









#include <stdio.h>

int main(void) {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    printf("Primeiro caractere: %c\n", palavra[0]);

    return 0;
}









#include <stdio.h>

int main(void) {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}









#include <stdio.h>

int main(void) {
    char palavra[50];
    int vogais = 0;

    printf("Digite uma palavra em letras minusculas: ");
    scanf("%49s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' ||
            palavra[i] == 'o' || palavra[i] == 'u') {
            vogais++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}
