#include <stdio.h>

int main (void){
    
    int age = 15;
    
    if(age < 16){
        printf("Não pode votar");
    }else if(age < 18){
        printf("opcional");
    }else{
        printf("Obrigatorio");
    }
}

int ternário (void){
    int age = 18;

    age >= 18? printf("maior de idade"):printf("menor de idade");

    return 0;
}