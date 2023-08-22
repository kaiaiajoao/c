/*Escreva um programa que guarda num vetor v1 (criado dinamicamente) N números inteiros, sendo N
previamente especificado pelo utilizador. Em seguida, o programa deve criar um vetor v2 com o mesmo
tamanho, preenchˆe-lo com o quadrado dos valores guardados em v1, mostrar ambos os vetores na tela (ver
exemplo) e liberar a mem´oria alocada.
Número de elementos: 4
Informe o 1o elemento: 1
Informe o 2o elemento: 2
Informe o 3o elemento: 3
Informe o 4o elemento: 10
Valores inseridos: [ 1 2 3 10 ]
Valores quadrados: [ 1 4 9 100 ]
*/
#include <stdio.h>
#include<stdlib.h>

int main(){


    int i,n;
    float *vetor1,*vetor2;
    printf("informe o tamanho: ");
    scanf("%d",&n);
    
	vetor1 = malloc(sizeof(int)*n); // alocação de mémoria no vetor 
    for(i=0;i<n;i++){
        scanf("%f", vetor1+i);
    }
    
	vetor2 = malloc(sizeof(int)*n);
    
	printf("\n O quadrado  dos valores guardados em vetor1 é: \n");
    for(i=0;i<n;i++){
    vetor2[i]= (*(vetor1+i) * *(vetor1+i));
    printf("\nA média da turma é: %f", vetor2[i]);
        }
        
      
   }
