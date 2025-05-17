#include <stdio.h>   // Inclui a biblioteca padrão de entrada/saída (para fputs)
#include <stdlib.h>  // Inclui a biblioteca padrão (para system)
#include <string.h>  

int main() {

    char str[15]="Ate breve!"; 
    
    printf("Até breve: %s\n", str);
    printf("%d\n", strlen(str));

}