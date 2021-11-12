#include<stdio.h>
#include<math.h>
#include<string.h>
/*Crie uma função com cabeçalho void strins (char str[], char c, int pos) que insira o caractere representado pela variável c na string representada por str na posição pos. Atenção, não será feita a substituição, e sim a inserção. Por exemplo, dada a string de entrada “Joanesburgo” e o caractere 'c' e o inteiro 4, a string deverá ser modificada para “Joancesburgo*/

void strins(char str[], char c, int pos)
{
	char temp, temp2;
	int lente, x;
	lente = strlen(str);
	temp = str[pos-1];
	str[pos-1] = c;
	for(x = pos-1; x <= lente; x++)
	{
		temp2 = str[x];
		str[x] = temp;
		temp = temp2;
	}
}

int main(){

	char letra, string[50];
	int posicao;

	printf("Digite uma frase ou palavra: ");
	gets(string);

	printf("Digite uma letra: ");
	scanf("%c", &letra);

	printf("Digite uma posicao: ");
	scanf("%d", &posicao);

	strins(string, letra, posicao);

	printf("%s", string);
	return 0;
}
