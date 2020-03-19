#include<stdio.h>

int main(){

  double pontoX1, pontoY1, pontoX2, pontoY2, distancia;

  scanf("%lf %lf %lf %lf", &pontoX1, &pontoY1, &pontoX2, &pontoY2);

  distancia = ((pontoX2 - pontoX1) * (pontoX2 - pontoX1)) + ((pontoY2 - pontoY1) * (pontoY2 - pontoY1));
  distancia = sqrt(distancia);

  printf("%.4lf\n", distancia);

return 0;
}