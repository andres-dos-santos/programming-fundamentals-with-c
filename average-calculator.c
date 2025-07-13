#include <stdio.h>

float average(float n1, float n2, float n3) {
  return (n1 + n2 + n3) / 3;
}

int main() {
  float n1, n2, n3;
  
  printf("Primeira nota: ");
  scanf("%f", &n1);

  printf("Segunda nota: ");
  scanf("%f", &n2);

  printf("Terceira nota: ");
  scanf("%f", &n3);

  float result = (float) average(n1, n2, n3);

  printf("-------------------------\n");

  printf("Resultado: %.2f\n", result);
  
  return 0;
}