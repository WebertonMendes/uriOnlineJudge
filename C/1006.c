#include<stdio.h>

main(){
  double notaA, notaB, notaC, mediaAluno, pesoA = 2, pesoB = 3, pesoC = 5, pesoTotal;

  scanf("%lf %lf %lf", &notaA, &notaB, &notaC);

  pesoTotal = (pesoA + pesoB + pesoC);
  mediaAluno = (notaA * pesoA) /pesoTotal + (notaB * pesoB) /pesoTotal + (notaC * pesoC) /pesoTotal;

  printf("MEDIA = %.1lf\n", mediaAluno);

return 0;
}