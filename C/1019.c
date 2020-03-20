#include<stdio.h>

int main(){

  int tempoDuracao, horas, minutos, segundos, umaHoraEmSegundos = 3600;

  scanf("%d", &tempoDuracao);
  
  horas = (tempoDuracao /umaHoraEmSegundos);
  minutos = (tempoDuracao - (umaHoraEmSegundos * horas)) /60;
  segundos = (tempoDuracao - (umaHoraEmSegundos * horas) - (minutos * 60));

  printf("%d:%d:%d\n", horas, minutos, segundos);

return 0;
}