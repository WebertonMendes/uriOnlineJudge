#include<stdio.h>

main() {

  int num;
  scanf("%d", &num);

  int vetor[num], i;

  for(i=0; i<num; i++) {
    scanf("%d", &vetor[i]);
  }
  
  int menor, posicao;

  for(i=0; i<num; i++) {
    if(i == 0) {
      menor = vetor[i];
      posicao = i;
    }

    if(vetor[i] < menor) {
      menor = vetor[i];
      posicao = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
  
return 0;
}