#include <stdio.h>

int sum (int a, int b){
    return a + b;
}

int main (void){
    int y = 50;
    int z = 20;
    
    int result = sum(y,z);
    
    printf("A soma de %d mais %d é: %d", y,z, result);
}