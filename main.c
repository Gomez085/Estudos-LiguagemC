#include <stdio.h>

int main(void) {
  int num, tab = 0;
  printf("--- TABUADA ---");
  printf("\nDigite um número: ");
  scanf("%d", &num);
  FILE *f;
  f = fopen("tabuada.txt", "w");
  for(int i = 1; i <= 10; i++){
    tab = i * num;
    printf("%d x %d é igual a: %d\n", num, i, tab);
    fprintf(f, "%d x %d é igual a: %d\n", num, i, tab);
  }
  fclose(f);
  
  
}
