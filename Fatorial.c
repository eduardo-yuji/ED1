#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n<0){
        printf("Numero Negativo");
        return -1;
    }
    if(n==0) return(1);
    return n*fatorial(n-1);
}

int main(){
    int n;
    
    printf("Digite o numero para calcular seu fatorial: ");
    scanf("%d", &n);
    fflush(stdin);

    printf("\nFatorial: %d", fatorial(n));
    
    printf("\n");
    return 0;
}