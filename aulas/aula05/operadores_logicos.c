#include <stdio.h>

int main()
{
    // E lógico
    int p = 0;
    int q = 0;
    printf("%i E %i == %i\n", p, q, p && q);
    q = 1;
    printf("%i E %i = %i\n", p, q, p && q);
    p = 1;
    q = 0;
    printf("%i E %i = %i\n", p, q, p && q);
    q = 1;
    printf("%i E %i = %i\n", p, q, p && q);

    // 1 < x < 10
    // 1 < x && x < 10

    // OU lógico
    p = 0;
    q = 0;
    printf("%i OU %i = %i\n", p, q, p || q);
    q = 1;
    printf("%i OU %i = %i\n", p, q, p || q);
    p = 1;
    q = 0;
    printf("%i OU %i = %i\n", p, q, p || q);
    q = 1;
    printf("%i OU %i = %i\n", p, q, p || q);

    // NÃO lógico
    p = 0;
    printf("NÃO %i = %i\n", p, !p);
    printf("NÃO %i = %i\n", p, !q);

    return 0;
}