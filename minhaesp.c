#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int coord;
    scanf("%d", &coord);

    double raiz = sqrt(coord);

    double x, y;
    int quadradoPerfeito = round(raiz) * round(raiz);

    int direcao;

    if(quadradoPerfeito % 2 == 0) {

        x = sqrt(quadradoPerfeito);
        y = x / 2;

        if (raiz - floor(sqrt(coord)) < 0.5) {
            direcao = 3;
        } else {
            direcao = 2;
        }
    } else {

        x = -sqrt(quadradoPerfeito);
        y = floor(x / 2);

        if (raiz - floor(sqrt(coord)) < 0.5) {
            direcao = 4;
        } else {
            direcao = 1;
        }
    }

    if (quadradoPerfeito != coord) {

        int diferenca = abs(quadradoPerfeito - coord);

        switch (direcao){
            case 1:
                x += diferenca;
                y += diferenca;
                diferenca *= -1;
                break;
    
            case 2:
                x -= diferenca;
                y -= diferenca;
                break;
    
            case 3:
                x -= diferenca;
                break;
    
            case 4:
                x += diferenca;
                diferenca *= -1;
                break;
            default:
                break;
        }
    
        quadradoPerfeito += diferenca;
        
    }

    printf("(%.0f, %.0f)", x, y);
    return 0;

}