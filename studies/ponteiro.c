#include <stdio.h>

int main (void){
    
    int x = 10;
    
    int *p = &x;
    
    printf("%d", *p);
    
    *p = 15;
    
    printf("\n%d", x);
    
    return 0;
}