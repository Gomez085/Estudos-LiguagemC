// número da sorte

#include <stdio.h>

int main(void) {
float valor;
int idade, ns;
  printf("Qual o valor total das suas compras?: ");
  scanf("%f", &valor);
  printf("Qual a sua idade?: ");
  scanf("%d", &idade);
  if (valor < 500) {
    ns = 5000 - valor * idade;
    printf("O seu número da sorte é: %d", ns);
  } else if (valor > 500) {
    ns = 50000 - valor * idade;
    printf("O seu número da sorte é: %d", ns);
  } else if (valor == 500) {
    ns = idade * idade;
    printf("O seu número da sorte é: %d", ns);
  }
}
