#include<stdio.h>

main(){

  int codPeca1, qtdPeca1, codPeca2, qtdPeca2;
  double vlrPeca1, vlrPeca2, vlrTotal;

  scanf("%d %d %lf %d %d %lf", &codPeca1, &qtdPeca1, &vlrPeca1, &codPeca2, &qtdPeca2, &vlrPeca2);

  vlrTotal = (vlrPeca1 * qtdPeca1) + (vlrPeca2 * qtdPeca2);

  printf("VALOR A PAGAR: R$ %.2lf\n", vlrTotal);

return 0;
}