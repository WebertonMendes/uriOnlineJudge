#include<stdio.h>

int main() {

  int num, i;

  scanf("%d", &num);

  for(i=0; i<12; i++) {
    num++;

    if(num%2 != 0) {
      printf("%d\n", num);
    }
  }

return 0;
}