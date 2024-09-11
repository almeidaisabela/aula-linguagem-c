#include <stdio.h>

int main()
{
    float preco;
    printf("Digite um preço: ");
    scanf("%f", &preco);
    printf("Você digitou: R& %.2f\n", preco);

    double fracao;
    printf("Digite uma fracao: ");
    scanf("%lf", &fracao);
    printf("Você digitou: %.10f\n", fracao);

    return 0;
}