#include<stdio.h>

int main(){

  int valorA, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

  scanf("%d", &valorA);

  notas100 = valorA /100;
  notas50 = (valorA %100);
  notas20 = (notas50 %50);
  notas10 = (notas20 %20);
  notas5 = (notas10 %10);
  notas2 = (notas5 %5);
  notas1 = (notas2 %2);

  notas50 = notas50 /50;
  notas20 = notas20 /20;
  notas10 = notas10 /10;
  notas5 = notas5 /5;
  notas2 = notas2 /2;
  notas1 = notas1 /1;

  printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", valorA, notas100, notas50, notas20, notas10, notas5, notas2, notas1);

return 0;
}