#include<stdio.h>

int main() {

int A, B, num;

scanf("%d %d", &A, &B);

num = B/A;

if(A*num == B){
  printf("Sao Multiplos\n");
}

if(A*num != B) {
  printf("Nao sao Multiplos\n");
}

return 0;
}