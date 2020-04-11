#include<stdio.h>

int main() {
  char percent = '%';
  int p1=15, p2=12, p3=10, p4=7, p5=4;
  float salario, ajuste, reajuste, novoSalario;

  scanf("%f", &salario);

  if(salario >= 0 && salario <= 400.00) {
    ajuste = p1*salario;
    reajuste = ajuste/100;
    printf("Novo salario: %.2f\n", salario+reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %c\n", p1, percent);
  }

  if(salario >= 400.01 && salario <= 800.00) {
    ajuste = p2*salario;
    reajuste = ajuste/100;
    printf("Novo salario: %.2f\n", salario+reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %c\n", p2, percent);
  }

  if(salario >= 800.01 && salario <= 1200.00) {
    ajuste = p3*salario;
    reajuste = ajuste/100;
    printf("Novo salario: %.2f\n", salario+reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %c\n", p3, percent);
  }

  if(salario >= 1200.01 && salario <= 2000.00) {
    ajuste = p4*salario;
    reajuste = ajuste/100;
    printf("Novo salario: %.2f\n", salario+reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %c\n", p4, percent);
  }


  if(salario > 2000.00) {
    ajuste = p5*salario;
    reajuste = ajuste/100;
    printf("Novo salario: %.2f\n", salario+reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %c\n", p5, percent);
  }

return 0;
}