#include<stdio.h>
/*a) A quantidade de jogadores com idade inferior a 24 anos;

b) A média das idades dos jogadores de cada time;

c) A média das alturas de todos os jogadores do campeonato; e 

d) a porcentagem de jogadores que estão acima de 75kg entre todos os jogadores do campeonato.*/

int main(){
	float real, dolar, marcos, libra;
	char moeda;

	printf("Insira a quantidade em reais: ");
	scanf("%f", &real);

	printf("Deseja converter para qual moeda? \n");
	printf("1 = dolar \n");
	printf("2 = marcos alemaes \n");
	printf("3 = libra \n");
	scanf("%s", &moeda);

	switch (moeda)
	{
	case '1':
		dolar = real *5.49;
		printf("R$%.2f convertidos em dolar = %.2f", real, dolar);
		break;
	
	case '2':
	marcos = real * 2;
	printf("R$%.2f convertidos em marcos alemaes = %.2f", real, marcos);
	break;

	case '3':
	libra = real *7.36;
printf("R$%.2f convertidos em libra esterlina = %.2f", real, libra);
	break;

	default:
		printf("Moeda digitada invalida");
		break;
	}

	return 0;
}
