#include <stdio.h>

int main() {
  char tecla = 'a';
  printf("O valor de tecla = %c\n", tecla);
  tecla ='F';
  printf("O valor de tecla = %c\n", tecla);

  int idade = 24;
  printf("O valor de idade = %i\n", idade);

  float media = 5.5f;
  printf("O valor de media = %.2f\n", media);

  double pi = 3.14156239;
  printf("O valor de pi = %f\n", pi);
  
  return 0;
}