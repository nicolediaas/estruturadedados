#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 99

int main(int argc, char* argv[]){

    FILE *dados;
    dados = fopen("dados.csv", "r");
    int x[size];
    float y[size];

    for(int i = 0; i <= size; i++){
     
     fscanf(dados, "%d,%f", &x[i], &y[i]);
    }
    
    float media_x = 0, media_y = 0;
    for(int j = 0; j <= size; j++){
        
        media_x += (float)x[j];
        media_y += y[j];
    }

    media_x /= size;
    media_y /= size;

    float inclinacao = 0, baixo, cima;

    for(int k = 0; k <= size; k++){
        cima += (x[k] - media_x) * (y[k]- media_y);
        baixo += pow((x[k] - media_x), 2);
    }

    inclinacao = cima/baixo;

    float intercepcao = media_y - inclinacao * media_x;

    printf("y = %.2fx + %.2f", inclinacao, intercepcao);

    fclose(dados);

    return(0);
}
