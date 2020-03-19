#include<stdio.h>

main(){

  double valorA, valorB, valorC, triangulo, circulo, trapezio, quadrado, retangulo, pi = 3.14159;

  scanf("%lf %lf %lf", &valorA, &valorB, &valorC);

  triangulo = (valorA * valorC) /2;
  circulo =  pi * (valorC * valorC);
  trapezio = ((valorA + valorB) * valorC) /2;
  quadrado = valorB * valorB;
  retangulo = valorA * valorB;

  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

return 0;
}