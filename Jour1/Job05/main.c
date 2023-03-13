#include <stdio.h>

int main() {
  int a = 520000, b = 100000;
  int division = a / b;
  int addition = a + b;
  int soustraction = a - b;
  int multiplication = a * b;

  printf("Résultat de la division : %d\n", division);
  printf("Résultat de l'addition : %d\n", addition);
  printf("Résultat de la soustraction : %d\n", soustraction);
  printf("Résultat de la multiplication : %d\n", multiplication);

  return 0;
}
