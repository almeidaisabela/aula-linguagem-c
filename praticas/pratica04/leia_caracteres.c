#include <stdio.h>

int main()
{
    char tecla;
    printf("Digite uma tecla: ");
    scanf("%c", &tecla);
    getchar();
    printf("Você digitou: %c\n", tecla);

    char nome[31];
    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);
    getchar();
    printf("Você digitou: %s\n", nome);

    return 0;
}