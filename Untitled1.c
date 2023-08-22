#include <stdio.h>
#include<stdlib.h>

int main(){


    int i,n;
    float nt;
    float *p;
 
    scanf("%d",&n);
    p = malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
           scanf("%f",&nt);
           p[i] = nt;
       }
       float media, soma;
       soma = 0;
       for(i=0;i<n;i++){
            soma = soma + p[i];
        
           }
   media = (soma/n);
   printf("%f", media);

    }
