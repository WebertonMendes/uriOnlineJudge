#include<stdio.h>

int main() {

  int ddd, brasilia=61, salvador=71, saoPaulo=11, rioDeJaneiro=21, juizDeFora=32, campinas=19, vitoria=27, beloHorizonte=31;
 scanf("%d", &ddd);

 if(ddd == brasilia) {
   printf("Brasilia\n");
 }
 else if(ddd == salvador) {
   printf("Salvador\n");
 }
 else if(ddd == saoPaulo) {
   printf("Sao Paulo\n");
 }
 else if(ddd == rioDeJaneiro) {
   printf("Rio de Janeiro\n");
 }
 else if(ddd == juizDeFora) {
   printf("Juiz de Fora\n");
 }
 else if(ddd == campinas) {
   printf("Campinas\n");
 }
 else if(ddd == vitoria) {
   printf("Vitoria\n");
 }
 else if(ddd == beloHorizonte) {
   printf("Belo Horizonte\n");
 }
 else if(ddd != brasilia && ddd != salvador && ddd != saoPaulo && ddd != rioDeJaneiro && ddd != juizDeFora && ddd != campinas && ddd != vitoria && ddd != beloHorizonte) {
   printf("DDD nao cadastrado\n");
 }

return 0;
}