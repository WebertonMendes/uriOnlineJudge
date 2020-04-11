#include<stdio.h>

main(){
  float notaA, notaB, notaC, notaD, mediaAluno, notaExame, mediaExame;
  int pesoA = 2, pesoB = 3, pesoC = 4, pesoD = 1, pesoTotal;

  scanf("%f %f %f %f", &notaA, &notaB, &notaC, &notaD);

  pesoTotal = (pesoA + pesoB + pesoC + pesoD);
  mediaAluno = (notaA * pesoA) /pesoTotal + (notaB * pesoB) /pesoTotal + (notaC * pesoC) /pesoTotal + (notaD * pesoD) /pesoTotal;

  if (mediaAluno >= 7.0) {
    printf("Media: %.1f\n", mediaAluno);
    printf("Aluno aprovado.\n");
  }

  else if (mediaAluno < 5.0) {
    printf("Media: %.1f\n", mediaAluno);
    printf("Aluno reprovado.\n");
  }

  else if (mediaAluno >= 5.0 && mediaAluno <= 6.9) {
    printf("Media: %.1f\n", mediaAluno);
    printf("Aluno em exame.\n");
    scanf("%f", &notaExame);
    printf("Nota do exame: %.1f\n", notaExame);
    
    mediaExame = (mediaAluno + notaExame) / 2;
      
    if (mediaExame < 5.0) {
      printf("Aluno reprovado.\n");
    } else {
      printf("Aluno aprovado.\n");
    }

    printf("Media final: %.1f\n", mediaExame);
  }

return 0;
}