#include<stdio.h>

int main() {

  int i, num, countPares=0, countImpares=0, countPositivos=0, countNegativos=0;

  for(i=0; i<5; i++) {
    scanf("%d", &num);

    if(num%2 == 0) {
      countPares++;
    }

    if(num%2 != 0){
      countImpares++;
    }

    if(num > 0) {
      countPositivos++;
    }

    if(num < 0) {
      countNegativos++;
    }
  }

  printf("%d valor(es) par(es)\n", countPares);
  printf("%d valor(es) impar(es)\n", countImpares);
  printf("%d valor(es) positivo(s)\n", countPositivos);
  printf("%d valor(es) negativo(s)\n", countNegativos);

return 0;
}