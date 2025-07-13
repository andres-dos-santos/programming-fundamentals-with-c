#include <stdio.h>

int main() {
  char name[60];
  int age, registration;

  printf("-- Adicione um aluno ao sistema --\n\n");

  printf("Nome do aluno: ");
  fgets(name, 59, stdin);

  printf("Idade: ");
  scanf("%i", &age);

  printf("Matrículo: ");
  scanf("%i", &registration);

  printf("-- Aluno matriculado ao sistema --\n\n");

  printf("Nome - %s", name);
  printf("Idade - %d\n", age);
  printf("Matrícula - %d\n", registration);

  return 0;
}