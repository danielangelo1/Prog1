#include<stdio.h>
#include<math.h>
/*Faça um programa que leia um vetor de 20 inteiros positivos (permita apenas que valores corretos sejam digitados, pedindo para o usuário repetir cada número negativo até que ele digite um positivo) e imprima todos os valores abaixo da média desses valores.*/

int main(){

	int vetor[20],x, soma = 0, count = 0;

	for(int i =1; i<=20; i++)
	{
		printf("Digite um valor positivo: ");
		scanf("%d", &vetor[i]);
		if(x < 0){
		count = count+1;
		printf("Numero invalido\nDigite um valor positivo: ");
		scanf("%d", &vetor[i]);
		}
		soma += vetor[i];
	}

	 printf("\nValores abaixo da media(%d):\n", soma/20);
 	 for(int i = 1; i <= 20; i++){
    	if(vetor[i] < soma/(20+count)){
     	printf("%d\n", vetor[i]);
	}
 }

	return 0;
}
