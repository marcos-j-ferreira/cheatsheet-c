/*
do {
// código a ser executado
} while (condição);
*/

#include <stdio.h>

int do_while(int a){
    
    int c;
    do{
        printf("%d\n",c );
        c++;
    } while(a >= c);
}

int main (void){
    do_while(10);
    
    return 0;
}