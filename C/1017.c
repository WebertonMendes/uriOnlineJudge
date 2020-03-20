#include<stdio.h>

int main(){

  float tempoViagem, velocidadeMedia, distanciaPercorrida, combustivelGasto, mediaVeiculo = 12;

  scanf("%f %f", &tempoViagem, &velocidadeMedia);

  distanciaPercorrida = tempoViagem * velocidadeMedia;

  combustivelGasto = distanciaPercorrida / mediaVeiculo;

  printf("%.3f\n", combustivelGasto);

return 0;
}