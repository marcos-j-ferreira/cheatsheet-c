#include <stdio.h>

int par_ou_impa(int a){
    
    if(a % 2){
        printf("Seu número é ímpar");
    }else{
        printf("Seu número é par");
    }
}

int main (void){
    
    par_ou_impa(12);
    
    return 0;
}