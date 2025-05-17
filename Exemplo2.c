#include <stdio.h>   // Inclui a biblioteca padrão de entrada/saída (para printf)
#include <stdlib.h>  // Inclui a biblioteca padrão (para system)

int main() {
    int i;                      // Declara uma variável inteira 'i' para controle do loop
    char str1[20] = "Hello World";  // Declara e inicializa a string 'str1' com "Hello World"
    char str2[20];              // Declara a string 'str2' (não inicializada)

    // Loop para copiar 'str1' para 'str2' caractere por caractere
    for (i = 0; str1[i] != '\0'; i++) {  // Condição corrigida: verifica se o caractere atual não é o terminador nulo
        str2[i] = str1[i];      // Copia o caractere de 'str1' para 'str2' na posição 'i'
    }
    
    str2[i] = '\0';             // Adiciona o terminador nulo ao final de 'str2' para marcar o fim da string

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);


    return 0;                   // Retorna 0, indicando que o programa foi executado com sucesso
}