#include <stdio.h>   // Inclui a biblioteca padrão de entrada/saída (para fputs)
#include <stdlib.h>  // Inclui a biblioteca padrão (para system)

int main() {
    
    int numero = 100;
    char texto[30] = "Hello World %\n";  // Declara e inicializa uma string com "Hello World" e uma quebra de linha

    // Escreve a string no dispositivo de saída padrão (stdout - normalmente a tela)
    fputs(texto, stdout);
    //fputs(numero/2, stdout); //Nao vai funcionar, fputs() nao trabalha com numeros
    printf("%d\n", numero/2);

    return 0;         // Retorna 0, indicando que o programa foi executado com sucesso
}