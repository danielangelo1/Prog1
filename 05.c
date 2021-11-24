#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100
/*Faça um programa recursivo que faça  a soma de dois números inteiros, através de incrementos sucessivos (Ex.: 3 + 3 = ++(+ + (+ + 3))).

*/


int main()
{
    int n1, n2, num1, num2, soma = 0, i =0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 < n2){
        num1 = n1;
        num2 = n2;
    }else{
        num1 = n2;
        num2 = n1;
    }
    while (i!=num1)
    {
        soma = soma +num2;
        i++;
    }
    printf("%d + %d = %d", num1, num2, soma);

return 0;
}