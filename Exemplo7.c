#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Entre com uma string: ");
    fgets(str1, 100, stdin);  // Lê com limite de tamanho

    strcpy(str2, str1);

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}