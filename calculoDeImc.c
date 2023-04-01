// Cálculo de IMC

#include <stdio.h>

void main(){
  char sexo;
  float peso, alt, imc;
  printf("Qual o seu sexo? (H ou M): ");
  scanf("%c", &sexo);
  printf("Qual o seu peso? (Em kilos): ");
  scanf("%f", &peso);
  printf("Qual a sua altura?:");
  scanf("%f", &alt);
  imc = peso / (alt * 2);
  if (sexo=='H' || sexo=='h') {
    if (imc < 19.1){
      printf("Você está abaixo do peso.");
    } else if (imc >= 19.1 && imc < 25.8) {
      printf("Você está com o peso normal.");
    } else if (imc >= 25.8 && imc < 27.3) {
      printf("Você está marginalmente acima do peso.");
    } else if (imc >= 27.3 && imc < 32.3) {
      printf("Você está acima do peso ideal");
    } else if (imc > 32.3) {
      printf("Você está obeso, cuidado!");
    }
  } 
  if (sexo=='M' || sexo=='m') {
   if (imc < 20.7){
      printf("Você está abaixo do peso.");
    } else if (imc >= 20.7 && imc < 26.4) {
      printf("Você está com o peso normal.");
    } else if (imc >= 26.4 && imc < 27.8) {
      printf("Você está marginalmente acima do peso.");
    } else if (imc >= 27.8 && imc < 31.1) {
      printf("Você está acima do peso ideal");
    } else if (imc > 31.1) {
      printf("Você está obeso, cuidado!");
    } 
  }
} 
