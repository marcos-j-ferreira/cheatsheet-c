#include <stdio.h>

int tabuada (int a){
    
    int n;
    
    for(int i = 0; i <= 10; i++){
        n = a * i;
        printf("%d * %d  = %d\n",a , i , n);
    }
}

int main (void){
    tabuada(2);
    
    return 0;
}