// Verificar qual a sala de um aluno

#include <stdio.h>

int main(void) {
  int idade;
  printf("Qual a idade do aluno?: \n");
  scanf("%d", &idade);
  if (idade >= 4 && idade <= 5) {
    printf("O aluno irá para a turma A");
  } else if(idade >= 6 && idade <= 8) {
    printf("O aluno irá para a turma B");
  } else if (idade == 9 || idade == 10){
    printf("O aluno irá para a turma C");
  } else {
    printf("Infelimente não possuimos turma para crianças dessa idade :/");
  }
}
