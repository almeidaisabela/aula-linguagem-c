#include <stdio.h>

int main()
{
    long int matricula;
    float a1;
    float a2;
    float media;

    printf("Digite a sua matrícula: ");
    scanf("%ld", &matricula);
    printf("Digite suas notas A1 e A2: ");
    scanf("%f %f", &a1, &a2);
    printf("Digite sua média: ");
    scanf("%f", &media);

    printf("\n%s\t %s\t %s\t %s\t\n", "Matricula", "A1", "A2", "Media");
    printf("%ld\t %.1f\t %.1f\t %.1f\t\n", matricula, a1, a2, media);

    return 0;
}