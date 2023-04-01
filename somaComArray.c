#include <stdio.h>

#include <math.h>
void soma(int numeros[10]){
  int total = 0;
  for(int i = 0; i < 10; i++){
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
    total = total + numeros[i];
  }
  printf("%d", total);
}
int main(){
  int numeros[10];
  soma(numeros);
  return 0;
}
