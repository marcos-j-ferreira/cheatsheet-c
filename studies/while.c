/*
while (condição) {

// código a ser executado enquanto a condição for verdadeira

}
*/

#include <stdio.h>

int While (int a){
    
    int c;
    
    while (c <= a){
        printf("%d\n", c);
        c++;
    } 
}

int main(void){
    While(100);
    
    return 0;
}