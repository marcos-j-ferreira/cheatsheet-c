#include <stdio.h>

extern int c; // usado para obter valores de outros arquivos.

void func (){
    
    // auto int a = 5; variavel a é automatica e tem escopo de funcao
    //printf("Valor de a: %d\n", a);
    
    static int a = 10; // variavel a é estatica e tem escopo de funcao
    
    printf("%d\n", a);
    
    a++;
}

int main(void){
    
    func();
    func();
    func();
    func();
    
    printf("%d", c);
    
    register int a = 5; // a é armazenada em um registrador, se possível
    printf("Valor de a: %d\n", a);
    
    return 0; 
}