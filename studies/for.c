/*
for (inicialização; condição; incremento) {
// código a ser executado enquanto a condição for verdadeira
}
*/


#include <stdio.h>

int FOR(int a){
    
    for(int i =0; i <= a; i ++){
        printf("\n%d", i);
    }
}

int main (void){
    
    FOR(100);
    
    return 0;
}