#include <stdio.h>

int main()
{
    printf("==============================\n");
    printf("\tN O T A  L E G A L\n");
    printf("==============================\n");
    printf("%s\t\t %s\t %s\t\n", "Produto", "Qtd", "Valor");
    printf("%s\t %03i\t %.2f\n", "Camiseta", 002, 39.99);
    printf("%s\t\t %03i\t %.2f\n", "Calca", 001, 89.90);
    printf("%s\t %03i\t %.2f\n", "Meia Social", 003, 19.99);
    printf("==============================\n");
    printf("%s\t\t\t%.2f\n", "Total:", 229.85);

    return 0;
}