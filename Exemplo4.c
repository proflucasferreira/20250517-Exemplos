#include <stdio.h>
#include <string.h> // Para strcspn

int main() {

    char nome[30];

    printf("Digite um nome: ");
    fgets(nome, 30, stdin);

    printf("O nome digitado foi: %s", nome);

    return 0;
}