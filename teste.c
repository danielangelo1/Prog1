#include<stdio.h>
/*Você deve fazer programa para receber a quantidade de em reais de dinheiro que uma pessoa que economizou para viajar. Ela vai passar em várias cidades de países diferentes e precisa converter seu dinheiro em dólares, marcos alemães e libra esterlina. O programa deve perguntar ao usuário para qual moeda ele quer converter, fazer a conversão e mostrar ao usuário.*/

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
