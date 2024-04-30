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
     printf("%d, %.2f\n", x[i], y[i]);
    }
    

    float media_x = 0, media_y = 0;
    printf("-------------------------------\n");
    for(int j = 0; j <= size; j++){
        
        media_x += (float)x[j];
        media_y += y[j];

        printf("%d, %.2f\n", x[j], media_x);

    }
    media_x /= size;
    media_y /= size;
    printf("%.2f, %.2f", media_x, media_y);


    float inclinacao = 0, baixo, cima;

    for(int k = 0; k <= size; k++){
        cima += (x[k] - media_x) * (y[k]- media_y);
        baixo += pow((x[k] - media_x), 2);
    }

    inclinacao = cima/baixo;

    float intercepcao = 0; 

    intercepcao = media_y - inclinacao * media_x;

    printf("y = %.2fx + %.2f", inclinacao, intercepcao);

    fclose(dados);

    return(0);

}