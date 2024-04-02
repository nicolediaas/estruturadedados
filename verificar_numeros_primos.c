#include <stdio.h>
#include <stdlib.h>

void verifyPrimeNumber();

void verifyPrimeWithParameter(int n);

int main(int argc, char **argv) {

    int n = atoi(argv[1]);
    verifyPrimeWithParameter(n);
}

void verifyPrimeWithParameter(int n) {
    int i;
    if(n <= 1){
        printf("false");
        return;
    }
    
    for(i = 2; i < n; i++){
        if(n % i == 0){
            printf("false");
            return;
        }
    }

    if(i == n){
        printf("true");
    }
  
}

void verifyPrimeNumber() {

    int i, n;

    scanf("%d", &n);

    if(n <= 1){
        printf("false");
        return;
    }
    
    for(i = 2; i < n; i++){
        if(n % i == 0){
            printf("false");
            return;
        }
    }

    if(i == n){
        printf("true");
    }
}