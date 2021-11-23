#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Você deve fazer um programa que peça ao usuário para digitar três número. Estes números devem ser salvos em um vetor e depois ordenados em ordem decrescente.*/
int main()
{
    float v[3], aux;
    
    for (int i = 0; i<3; i++){

    printf("Digite o %d numero: ", i+1);
    scanf("%f", &v[i]);
    }

    for (int i=0; i<100; i++){
        for (int j=i+1; j<3; j++)
            if(v[i] < v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    }
    for (int i = 0; i<3; i++){
        printf("%.2f\n", v[i]);
    }
return 0;
}