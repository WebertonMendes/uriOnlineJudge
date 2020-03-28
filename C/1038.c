#include<stdio.h>

int main(){
  
  int id, qtd;
  float valor;

  scanf("%d %d", &id, &qtd);

  if(id == 1){
    valor = qtd * 4.00;
  }

  if(id == 2){
    valor = qtd * 4.50;
  }

  if(id == 3){
    valor = qtd * 5.00;
  }

  if(id == 4){
    valor = qtd * 2.00;
  }

  if(id == 5){
    valor = qtd * 1.50;
  }

  printf("Total: R$ %.2f\n", valor);

return 0;
}