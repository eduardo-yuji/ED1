#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n==1) return (0);
    if(n==2) return (1);
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;

    printf("\nDigite quantos numeros da sequencia de fibonacci voce quer: ");
    scanf("%d", &n);
    fflush(stdin);

    printf("\nSequencia de fibonacci:");

    for(int i = 1; i <= n; i++){
        printf("%d",fibonacci(i));
        if(i != n){
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}