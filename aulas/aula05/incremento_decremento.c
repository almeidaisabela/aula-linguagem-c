#include <stdio.h>

int main()
{
    // Entrada
    int numero;
    printf("Entre com um número: ");
    int deu_certo = scanf("%i", &numero);
    getchar();

    // Processamento
    // numero = numero + 1;
    int incremento = numero;
    incremento++;
    int pre_incremento = ++incremento;
    int pos_incremento = incremento++;

    // numero = numero - 1
    int decremento = numero;
    decremento--;
    int pre_decremento = --decremento;
    int pos_decremento = decremento--;

    // Saída
    printf("Incremento de %i é %i\n", numero, incremento);
    printf("Pré-incremento de %i é %i\n", numero, pre_incremento);
    printf("Pós-incremento de %i é %i\n", numero, pos_incremento);
    printf("Decremento de %i é %i\n", numero, decremento);
    printf("Pré-decremento de %i é %i\n", numero, pre_decremento);
    printf("Pós-decremento de %i é %i\n", numero, pos_decremento);

    return 0;
}