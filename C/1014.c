#include<stdio.h>

int main(){

  double kmTotal, combustivel, mediaConsumo;

  scanf("%lf %lf", &kmTotal, &combustivel);

  mediaConsumo = kmTotal / combustivel;

  printf("%.3lf km/l\n", mediaConsumo);

return 0;
}