#include <stdio.h>   
#include <stdlib.h> 

int main(){

    char str[20], nome[30]; 

    printf("Digite alguma coisa: ");
    scanf("%s", str);

    printf("%s\n\n", str);
    printf("%c\n", str[0]);
    printf("%c\n", str[1]);
    printf("%c\n", str[2]);
    printf("%c\n", str[3]);
    printf("%c\n", str[4]);

    setbuf(stdin, NULL);
    printf("Digite alguma coisa: ");
    fgets(nome, 30, stdin);

    printf("%s\n\n", nome);


}