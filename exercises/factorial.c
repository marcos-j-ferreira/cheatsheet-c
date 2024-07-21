#include <stdio.h>

int factorial (int a){
    
    int sum = 1;
    for(int i = 0; i < a; i++){
        sum += sum * i;
    }
    printf("%d", sum);
}


int main (void){
    
    factorial(5);
    
    return 0;
}