#include <stdio.h>
#include <stdlib.h>

int buscaBin(int numero, int vetor[], int tamanho){
    int ini = 0, fim = tamanho-1, meio;

    while(ini <= fim){
        meio = (int)(ini + fim)/2; 
        if(vetor[meio] == numero){return meio;}
        if(vetor[meio] < numero){
            ini = meio+1;
        }else{
            fim = meio-1;
        }
    return -1;
    }
}

int main(){

    int vetor[] = {3,8,13,18,20,23,28};
    int numero = 13, pos, tamanho;
    tamanho = sizeof(vetor);

/*
    printf("Digite o numero para pesquisar sua posicao: ");
    scanf("%d", &numero);
    fflush(stdin);
*/

    if((pos=buscaBin(numero, vetor, tamanho))==-1){
        printf("O elemento nao esta no vetor\n");
    }else{
        printf("O elemento esta na posicao: %d\n", pos);
    }

    return 0;
}