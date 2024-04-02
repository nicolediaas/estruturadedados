#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
 
    FILE* arq_num;
    char* fileName = argv[1];
    arq_num = fopen(fileName, "r");


    if(arq_num == NULL){

        printf("erro ao abrir num.txt");

        exit(1);   

    }

    char line[200];
    int numeros[2000]= {};
    int index = 0;

    printf("Números antes de ordenar\n");

    while(fgets(line, 200, arq_num) != NULL){

        numeros[index] = atoi(line);
        printf("%d ", numeros[index]);
        index++;

    }

    int qtd_n = index;
    

    for(int i = 0; i < qtd_n; i++){
        for(int j = i; j < qtd_n; j++){
            if(numeros[i] > numeros[j]){
                int aux = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = aux;
            }
        }
    }
    
        printf("\nNúmeros depois de ordenar\n");


    for(int i = 0; i < qtd_n; i++){
        printf("%d ", numeros[i]);
    }


    exit(0);
}
 






    



