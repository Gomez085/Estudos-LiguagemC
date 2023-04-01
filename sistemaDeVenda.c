//sistema de venda de loja

#include <stdio.h>

int main(void) {
  float val;
  int parc;
  printf("Qual o valor da compra a vista?: ");
  scanf("%f", &val);
  printf("Qual o número de parcelas desejadas?: ");
  scanf("%d", &parc);
  if (parc < 0){
    printf("número inválido.");
    return (0);
  }
  if (parc == 1){
    printf("O valor da compra A VISTA fica: %f", val);
  } else if (parc == 2) {
    printf("A compra foi em 2 PARCELAS.\n O valor da compra fica: %.2f", val + val * 0.1);
    printf("\nO valor de cada parcela é: %.2f", (val + val * 0.1) / 2);
  } else if (parc >= 3){
    printf("A compra foi em 3 PARCELAS.\n O valor da compra fica: %.2f", val + val * 0.2);
    printf("\nO valor de cada parcela é: %.2f", (val + val * 0.2) / 3);
  }
}
