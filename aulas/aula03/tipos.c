#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  // char 'a', 'v', ' '
  // int -5, 0, 5
  // float -5.5f, 0.0, 5.5f
  // double -5.5, 0.0, 5.5 - usado para números grandes como o 3,14...
  // void - sem valor

  printf("O tamanho do char na memória é %lu byte(s)\n", sizeof(char));
  printf("O tamanho do int na memória é %lu byte(s)\n", sizeof(int));
  printf("O tamanho do float na memória é %lu byte(s)\n", sizeof(float));
  printf("O tamanho do double na memória é %lu byte(s)\n", sizeof(double));

  printf("\n");

  printf("A faixa de valores do char vai de %i até %i\n", CHAR_MIN, CHAR_MAX);
  printf("A faixa de valores do int vai de %i até %i\n", INT_MIN, INT_MAX);
  printf("A faixa de valores do float vai de %E até %E\n", FLT_MIN, FLT_MAX);
  printf("A faixa de valores do double vai de %E até %E\n", DBL_MIN, DBL_MAX);

  printf("\n");

  printf("O tamanho do short int na memória é %lu byte(s)\n", sizeof(short int));
  printf("O tamanho do long int na memória é %lu byte(s)\n", sizeof(long int));
  printf("O tamanho do short double na memória é %lu byte(s)\n", sizeof(long double));

  printf("\n");

  printf("A faixa de valores do short int vai de %i até %i\n", SHRT_MIN, SHRT_MAX);
  printf("A faixa de valores do long int vai de %li até %li\n", LONG_MIN, LONG_MAX);
  printf("A faixa de valores do long double vai de %LE até %LE\n", LDBL_MIN, LDBL_MAX);

  printf("\n");

  printf("A faixa de valores do unsigned char vai de %i até %i\n", 0, UCHAR_MAX);
  printf("A faixa de valores do unsigned short vai de %i até %i\n", 0, USHRT_MAX);
  // printf("A faixa de valores do unsigned int vai de %i até %lu\n", 0, UINT_MAX);
  printf("A faixa de valores do unsigned long vai de %i até %lu\n", 0, ULONG_MAX);

  return 0;
}