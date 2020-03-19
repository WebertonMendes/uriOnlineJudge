#include<stdio.h>

int main() {

  double notaA, notaB, pesoA = 3.5, pesoB = 7.5, media;

  scanf("%lf %lf", &notaA, &notaB);

  media = (pesoA * notaA)/11 + (pesoB * notaB)/11;

  printf("MEDIA = %.5lf\n", media);

return 0;
}