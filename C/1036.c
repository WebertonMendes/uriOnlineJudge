#include<stdio.h><math.h>

int main() {

  double valueA, valueB, valueC, delta, x1, x2;

  scanf("%lf %lf %lf", &valueA, &valueB, &valueC);

  delta = (valueB * valueB) - (4 * valueA * valueC);
  x1 = (-valueB + sqrt(delta)) / (2 * valueA);
  x2 = (-valueB - sqrt(delta)) / (2 * valueA);

  if (delta < 0 || valueA == 0){
    printf("Impossivel calcular\n");
  } else {
    printf("R1 = %.5lf\n", x1);
    printf("R2 = %.5lf\n", x2);
  }

return 0;
}