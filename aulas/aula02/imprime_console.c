#include <stdio.h> 

int main() {
  // imprime um texto
  printf("Olá, mundo!\n");

  // imprime um número
  printf("%i\n", 10);
  printf("%i %i\n", 50, 100);
  printf("%05i\n", 21); // 5 espaços, sendo os 3 espaços restantes preenchidos por 0

  // imprime um decimal
  printf("%f\n", 8.5);
  printf("%.3f\n", 3.14159);
  printf("%8.2f\n", 110.5);
  printf("%8.2f\n", 2556.86);

  // imprime um caractere
  printf("%c\n", 'A');
  printf("%c\n", 68); // ascii table

  // imprime uma string
  printf("%s\n", "Boa noite!");
  printf("%30s!\n", "Quero café");
  printf("%-30s!\n", "Quero café");
  
  return 0;
}