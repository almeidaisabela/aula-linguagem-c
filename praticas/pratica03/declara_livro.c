#include <stdio.h>

int main()
{
  long int isbn = 0;
  int num_paginas = 0;
  float preco = 0;
  int publicacao = 0;

  printf("ISBN: %013li\n", isbn);
  printf("Num. Paginas: %03i\n", num_paginas);
  printf("Preco: R$ %07.2f\n", preco);
  printf("Publicado em: %04i\n", publicacao);

  return 0;
}