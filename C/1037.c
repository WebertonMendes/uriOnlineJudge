#include<stdio.h>

int main() {

  double number;

  scanf("%lf", &number);

  if(number < 0.00 || number > 100.00) {
    printf("Fora de intervalo\n");
  }

  if (number >= 0.00 && number <= 25.00) {
    printf("Intervalo [0,25]\n");
  }

  if (number >= 25.01 && number <= 50.00) {
    printf("Intervalo (25,50]\n");
  }

  if(number >= 50.01 && number <= 75.00) {
    printf("Intervalo (50,75]\n");
  }

  if(number >= 75.01 && number <= 100.00) {
    printf("Intervalo (75,100]\n");
  }

return 0;
}