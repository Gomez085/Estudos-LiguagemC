// Verificador de mês

#include <stdio.h>

int main(void) {
int mes;
  printf("Digite um número e diremos o seu resppectivo mês: \n");
  scanf("%d", &mes);
  if (mes == 1) {
    printf("O mês é JANEIRO!");
  } else if (mes == 2){
    printf("O mês é FEVEREIRO");
  } else if (mes == 3) {
    printf("O mês é MARÇO!");
  } else if (mes == 4) {
    printf("O mês é ABRIL!");
  } else if (mes == 5) {
    printf("O mês é MAIO!");
  } else if (mes == 6) {
    printf("O mês é JUNHO!");
  } else if (mes == 7) {
    printf("O mês é JULHO!");
  } else if (mes == 8) {
    printf("O mês é AGOSTO!");
  } else if (mes == 9) {
    printf("O mês é SETEMBRO!");
  } else if (mes == 10) {
    printf("O mês é OUTUBRO!");
  } else if (mes == 11) {
    printf("O mês é NOVEMBRO!");
  } else if (mes == 12) {
    printf("O mês é DEZEMBRO!");
  } else {
    printf("Número inválido!");
  }
}
