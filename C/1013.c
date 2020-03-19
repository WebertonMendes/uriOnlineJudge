#include<stdio.h>

int main(){

  int valorA, valorB, valorC, valorMaior;

  scanf("%d %d %d", &valorA, &valorB, &valorC);

  valorMaior = (valorA + valorB + abs(valorA - valorB)) /2;
  valorMaior = (valorMaior + valorC + abs(valorMaior - valorC)) /2;

  printf("%d eh o maior\n", valorMaior);

return 0;
}