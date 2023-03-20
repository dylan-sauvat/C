#include <stdio.h>

int main() {
  float a, b;
  printf("Saisissez la valeur de a : ");
  scanf("%f", &a);
  printf("Saisissez la valeur de b : ");
  scanf("%f", &b);

  float division = a / b;
  float addition = a + b;
  float soustraction = a - b;
  float multiplication = a * b;

  printf("%.3f / %.3f = %.3f\n", a, b, division);
  printf("%.3f + %.3f = %.3f\n", a, b, addition);
  printf("%.3f - %.3f = %.3f\n", a, b, soustraction);
  printf("%.3f * %.3f = %.3f\n", a, b, multiplication);

  return 0;
}
