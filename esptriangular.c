#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int coord;
    scanf("%d", &coord);
    double raiz = sqrt(coord);

    int x, y;
    int quadradoPerfeito = round(raiz) * round(raiz);

    int direcao;

    if (quadradoPerfeito % 2 == 0){

        x = -sqrt(quadradoPerfeito);
        y = x / 2;

        if (raiz - floor(sqrt(coord)) < 0.5){
            direcao = 3;
        }
        else{
            direcao = 1;
        }
    }
    else{
        x = sqrt(quadradoPerfeito);
        y = floor(x / -2);

        if (raiz - floor(sqrt(coord)) < 0.5){
            direcao = 2;
        }
        else{
            direcao = 4;
        }
    }

    if (quadradoPerfeito != coord){
        
        int diferenca = abs(quadradoPerfeito - coord);

        switch (direcao){
        case 1:
            x += diferenca;
            y += diferenca;
            diferenca *= -1;
            break;

        case 2:
            x -= diferenca;
            y += diferenca;
            break;

        case 3:
            x += diferenca;
            break;

        case 4:
            x -= diferenca;
            diferenca *= -1;
            break;
        default:
            break;
        }

        quadradoPerfeito += diferenca;
    }

    printf("(%d, %d)\n", x, y);

    return 0;
}
