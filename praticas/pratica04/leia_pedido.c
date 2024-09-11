#include <stdio.h>

int main()
{
    char produto[21];
    int quantidade;
    float valor;

    printf("Digite o nome do produto: ");
    scanf("%[^\n]s", produto);
    getchar();
    printf("Digite a quantidade do produto: ");
    scanf("%i", &quantidade);
    getchar();
    printf("Digite o valor do produto: R$");
    scanf("%f", &valor);
    getchar();

    printf("\n===========================\n");
    printf("\tP E D I D O\n");
    printf("===========================\n");
    printf("%s\t\t %s\t %s\t\n", "Produto", "Qtd", "Valor");
    printf("%s\t %03i\t %.2f\t\n", produto, quantidade, valor);

    return 0;
}