#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Você deve fazer um programa que irá preencher um ponteiro com a quantidade de números inteiros definido pelo usuário, calcular e mostrar os números pares.

int main() { 
   
  int *v; 
  int i, num_componentes;
  
  printf("Informe a quantidade de numeros inteiros: ");
  scanf("%d", &num_componentes);

   v = (int *) malloc(num_componentes * sizeof(int));

   for (i = 0; i < num_componentes; i++)
  {
    printf("\nDigite o valor %d numero: ", i+1);
    scanf("%d",&v[i]);

  }

  for (i = 0; i < num_componentes; i++){
      if ((v[i] % 2) == 0){
          printf("Numero %d eh par\n", v[i]);
      }
    }

    free(v);
  
    getch();

        return 0;
}