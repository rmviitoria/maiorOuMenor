/******************************************************************************

Crie um programa que recebe dois valores inteiros pelo teclado e imprime qual dos dois é maior.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2;
     printf("Digite o primeiro número: ");
     scanf("%d", &num1);
     printf("Digite o segundo número: ");
     scanf("%d", &num2);
     
     if(num1 > num2){
         printf("O primeiro número (%d) é maior que o segundo número (%d)", num1, num2);
     }else if(num2 > num1){
         printf("O segundo número (%d) é maior que o primeiro número (%d)", num2, num1);
     }else if(num1 = num2){
         printf("Erro! Os dois número são iguais, você precisa digitar números diferentes.");
     }
     
     return 0;
}
