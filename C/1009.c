#include<stdio.h>

main(){

  char vendedor;
  double salarioFixo, totalVendas, salarioFinal;

  scanf("%s %lf %lf", &vendedor, &salarioFixo, &totalVendas);

  salarioFinal = salarioFixo + (totalVendas * 15 /100);

  printf("TOTAL = R$ %.2lf\n", salarioFinal);

return 0;
}