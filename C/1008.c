#include<stdio.h>

main(){

  int numero, horas;
  double valorHora, salario;

  scanf("%d %d %lf", &numero, &horas, &valorHora);

  salario = horas * valorHora;

  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, salario);

return 0;
}