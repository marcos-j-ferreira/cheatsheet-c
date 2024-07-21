#include <stdio.h>


/*
switch (expressão) {
case valor1:
    // código a ser executado se a expressão for igual a valor1
    break;
case valor2:
    // código a ser executado se a expressão for igual a valor2
    break;
default:
    // código a ser executado se nenhum dos valores acima for igual a expressão
}
*/
int dayOfweek (int a){

    switch(a){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Enter a valid day of week");
        
    }
    
}


int main (void){
    
    dayOfweek(3);
    
    return 0;
    
}