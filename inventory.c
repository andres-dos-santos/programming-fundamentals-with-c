#include <stdio.h>

int main() {
  char productA[50] = "productA";
  char productB[50] = "productA";

  unsigned int stockA = 1000;
  unsigned int stockB = 2000;

  float valorA = 10.50;
  float valorB = 20.40;

  unsigned int minStockA = 500;
  unsigned int minStockB = 2500;

  double totalValueA, totalValueB;
  int resultA, resultB;

  printf("Produto %s tem estoque %u e o valor unitário é %f\n", productA, stockA, totalValueA);
  printf("Produto %s tem estoque %u e o valor unitário é %f\n", productB, stockB, totalValueB);

  resultA = stockA > minStockA;
  resultB = stockB > minStockB;

  printf("O produto %s tem estoque mínimo %d\n", productA, stockA);
  printf("O produto %s tem estoque mínimo %d\n", productB, stockB);

  printf("Valor total de A é maior que que o valor total de B: %d\n", (stockA * valorA) > (stockB * valorB));
  
  return 0;
}