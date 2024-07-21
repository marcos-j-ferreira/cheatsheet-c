#include <stdio.h>
#include <string.h>

struct Pessoa{
    char name[10];
    int age;
};
    
int main(void){
    
    
    struct Pessoa pessoa1;
    
    strcpy(pessoa1.name, "Marcos");
    pessoa1.age = 19;
    
    printf("My name is %s i am %d years", pessoa1.name, pessoa1.age);
    
    return 0;
    
}