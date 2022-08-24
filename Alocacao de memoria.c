#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor = NULL, n, i, soma=0;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    fflush(stdin);

    vetor = (int*) malloc(n*sizeof(int));
    if(vetor == NULL){
        printf("\nErro na alocação do vetor.\n");
        return 1;
    }

    for(i=0; i<n; i++){
        printf("Digite o elemento do vetor[%d]= ", i);
        scanf("%d", &vetor[i]);
        fflush(stdin);
    }

    for(i=0; i<n; i++){
        soma+=vetor[i];
    }

    printf("\nSoma total: %d\n", soma);

    free(vetor);
    return 0;
}