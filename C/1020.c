#include<stdio.h>

int main(){

  int idadeDias, anos, meses, dias;

  scanf("%d", &idadeDias);

  anos = idadeDias /365;
  meses = (idadeDias %365) /30;
  dias = (idadeDias %365) %30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

return 0;
}