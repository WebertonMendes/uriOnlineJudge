#include<stdio.h>

main(){

  int valorA, valorB, valorC, valorD, diferenca;

  scanf("%d %d %d %d", &valorA, &valorB, &valorC, &valorD);

  diferenca = (valorA * valorB) - (valorC * valorD);

  printf("DIFERENCA = %d\n", diferenca);

return 0;
}