#include<stdio.h>
/*a) A quantidade de jogadores com idade inferior a 24 anos;

b) A média das idades dos jogadores de cada time;

c) A média das alturas de todos os jogadores do campeonato; e 

d) a porcentagem de jogadores que estão acima de 75kg entre todos os jogadores do campeonato.*/

int main(){
	int soma = 0, idade, peso, times, count = 0, acima = 0;
	float altura, media, altura_media = 0, acimade100kg;
	

	for (int j = 1; j <= 5; j++){
		media = 0.0;

		for (int i = 1; i<=11; i++)
		{
			printf("Digite a idade do %d jogador do time %d: ", i, j);
			scanf("%d", &idade);
			printf("Digite o peso do %d jogador do time %d: ", i, j);
			scanf("%d", &peso);
			printf("Digite a altura do %d jogador do time %d: ", i, j);
			scanf("%f", &altura);
		
			if (idade < 24)
			count++;		
			if (peso >75)
			acima++;
		soma += idade;
		altura_media += altura;
		}
		media = soma /11;
		printf("A media das idades do time %d eh %.2f\n", j, media);
	}
	altura_media = altura_media / 55;	
	acimade100kg = 100* acima / 55;


	printf("Numero jogadores menores de 24 = %d\n", count);
	printf("%d", media);
	printf("media de altura de todos jogadores = %.2f\n", altura_media);
	printf("Porcentagem de jogadores acima de 75kg %.2f\n", acimade100kg);
	return 0;
}
