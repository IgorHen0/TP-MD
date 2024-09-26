#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int coord;
    scanf("%d", &coord);
    double raiz = sqrt(coord);

    int quadradoPerfeito = round(raiz) * round(raiz);
    int x, y;

    int direcao;

    if (quadradoPerfeito % 2 != 0){

        x = floor(raiz / 2);
        y = ceil(raiz / 2);

        if (quadradoPerfeito < coord){
            direcao = 2;
        }
        else{
            direcao = 3;
        }
    }
    else{
        x = round(raiz/-2);
        y = round(raiz/-2);

        if (quadradoPerfeito < coord){
            direcao = 4;
        }
        else{
            direcao = 1;
        }
    }

    if (quadradoPerfeito != coord){

        int diferenca = abs(quadradoPerfeito - coord);

        switch (direcao){
        case 1:
            y += diferenca;
            break;

        case 2:
            x -= diferenca;
            break;

        case 3:
            y -= diferenca;
            break;

        case 4:
            x += diferenca;
            break;

        default:
            break;
        }

        quadradoPerfeito += diferenca;
    }

    printf("(%d, %d)\n", x, y);

    return 0;
}