#include <stdio.h>

int main() {
  float a = 12.14, b = 26.76;
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
