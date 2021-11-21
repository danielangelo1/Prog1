#include<stdio.h>
#include<math.h>
#include<string.h>
#define tam 101

/*Fazer uma funcao que receba como parametro uma string. Esta
funcao deve retornar o numero de vogais que a string possui.*/

int contaVogais(char s[]){
	
	int numVogais = 0, i, j;
	char *vogais;

	vogais = "aeiouAEIOU";
	for(i = 0; s[i]!='\0'; i++){
		for (j = 0; vogais[j] != '\0'; j++){

			if(s[i] == vogais[j]){
				numVogais++;
				break;
			}
		}
	}
	return numVogais;
}



int main(){

	int valor;
	char s[tam];
	printf("Digite uma string: ");
	fgets(s, tam, stdin);
	valor = contaVogais(s);

	printf("Vogais na string = %d", valor);


	return 0;
}
