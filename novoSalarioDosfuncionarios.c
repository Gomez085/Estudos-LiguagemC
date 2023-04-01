// Novos salários dos funcionários de uma empresa

#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario_atual, aumento_salario;
    int opc;
 
    printf("\n");
    printf(" Informe seu Salario atual..: ");
    scanf("%f",&salario_atual);
    printf("\n");
    printf(" ==== Informe uma opcao ====\n");
    printf(" ==== 1- Tecnico        ====\n");
    printf(" ==== 2- Gerente          ====\n");
    printf(" ==== 3- Auxiliar       ====\n\n");
    printf(" Digite o numero Correspomddente ao seu Cargo..: ");
    scanf("%d",&opc);
    switch(opc){
        case 1:
            aumento_salario = (salario_atual * 50) / 100;
            aumento_salario = aumento_salario + salario_atual;
            printf("O novo Salario para Tecnicos e de..: %.2f\n",aumento_salario);
        break;  
        case 2:
            aumento_salario = (salario_atual * 30) / 100;
            aumento_salario = aumento_salario + salario_atual;
            printf("O novo Salario para Gerentes e de..: %.2f\n",aumento_salario);
        break;
        case 3:
            aumento_salario = (salario_atual * 20) / 100;
            aumento_salario = aumento_salario + salario_atual;
            printf("O novo Salario para Auxiliares e de..: %.2f\n",aumento_salario);
        break;
    default: printf("Opcao Invalida\n");
            printf("Tente Novamente\n");  
    }  
}
