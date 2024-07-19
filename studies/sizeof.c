#include <stdio.h>

int main(void){

    int a = 10;

    printf("%lu bytes:", sizeof(a));

    float b = 1.76;

    printf("\n%lu bytes:", sizeof(b));

    char c = 'M';

    printf("\n%lu bytes:", sizeof(c));

    char n[6] = "marcos";

    printf("\n%lu", n);
    return 0;
}