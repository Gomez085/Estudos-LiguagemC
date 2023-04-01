// Sistema de checkout de hotel
/* Esse programa irá retornar o nome do hóspede, O tipo de apartamento, a quantidade de diárias,
o valor do apto, o valor total das diárias, o valor do consumo interno, o subtotal, o valor da taxa de serviço e o valor total */

#include <stdio.h>

int main(void) {
char nome[30];
char ap;
float diaria, consumo, vtgeral, subtotal, vtdiaria, txservico, vlunitario;

vlunitario = 0;
txservico = 0; 
vtdiaria = 0; 
subtotal = 0; 
vtgeral = 0;

printf("digite o nome do hospede: \n");
scanf("%s", &nome);

printf("digite o tipo de ap (A,B,C ou D): \n");
scanf("%s", &ap);

printf("digite a quantidade de dias: \n");
scanf("%f", &diaria);
printf("digite o valor do consumo interno: \n");
scanf("%f", &consumo);

if (ap=='a'){ 
  vlunitario = 150;
}
else if (ap=='b'){ 
  vlunitario = 100;
}
else if (ap=='c'){
  vlunitario = 75;
}
else if (ap=='d'){
  vlunitario = 50;
}

vtdiaria = diaria*vlunitario;
subtotal = vtdiaria+consumo;
txservico = subtotal*0.10;
vtgeral = subtotal+txservico;

printf("O nome do hóspede é: %s \n", nome);
printf("O tipo de apartamento foi: %c \n", ap);
printf("A quantidade de diárias foi: %4.0f \n", diaria);
printf("O valor do seu apto foi: %.2f\n", vlunitario);
printf("O valor total das diárias: %.2f\n", vtdiaria);
printf("O valor do consumo interno foi de: %.2f\n", consumo);
printf("O subtotal deu: %.2f\n", subtotal);
printf("O valor da taxa de serviço: %.2f\n", txservico);
printf("O valor total, geral foi de: %.2f", vtgeral);
}
