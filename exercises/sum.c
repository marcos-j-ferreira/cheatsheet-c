#include <stdio.h>

int sum (int a, int b){
    return printf("The sum of %d + %d = %d",a, b, a + b);
}

int main(void){
    
    int a ,b;
    
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter other number:\n");
    scanf("%d", &b);
    
    sum(a,b);
    
    return 0;
}