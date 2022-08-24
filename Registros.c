#include <stdio.h>
#include <stdlib.h>

typedef struct registros
{
    int x;
    int y;
} Pontos;

void atualizaCoordenadas(Pontos *p){
    p->x = p->x+1;
    p->y = p->y+1;
}

int main(){
    Pontos p1 = {1, 2};
    Pontos p2 = {3, 4};

    atualizaCoordenadas(&p1);

    printf("\nCoordenads de P1: \nx = %d ; y = %d\n", p1.x, p1.y);
    printf("\nCoordenads de P2: \nx = %d ; y = %d\n", p2.x, p2.y);

    return 0;
}