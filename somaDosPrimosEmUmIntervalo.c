#include <stdio.h>

int main()
{
    int numI, numF, primos = 0;
    printf("Digite o número inicial: ");
    scanf("%d", &numI);
    printf("Digite o número final: ");
    scanf("%d", &numF);

  int i;
  int j;
  int divisor,aux = 0;
  for(i = numI ; i< numF; i++){
    int divisor = 0;
        for(j=1;j<=i;j++){
          if(i%j==0){
              divisor++;
          }
        }
        if(divisor==2){
            aux=aux+i;
        }
}
printf("\nA soma dos primos eh:%d",aux);
    return 0;
}
