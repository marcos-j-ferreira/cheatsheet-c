#include <stdio.h>

int main (void){

    int a = 10, b = 15;

    int sum =  a + b;

    printf("%d + %d = %d\n",a,b, sum);


    int menos = a - b;

    printf("%d - %d = %d\n",a,b,menos);

    int mult = a * b;

    printf("%d * %d = %d\n",a,b, mult);

    int div = a / b;

    printf("%f\n", div);

    int resto = a % b;

    printf("%d\n", resto);

    a++;

    printf("incremento: %d\n", a);

    b--;

    printf("decremento: %d\n", b);

    return 0;
}